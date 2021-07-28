#include <bits/stdc++.h>
using namespace std;
int main() {
    int x[6201], y[6201], z[6201], dist[2501];
    bool visited[2501];
    int V, E, a, b;
    vector <pair<int, int>> adjList[2501];
    cin>>V>>E>>a>>b;
    a--;b--;
    for(int i=0;i < E;i++) {
        cin>>x[i]>>y[i]>>z[i];
        x[i]--;y[i]--;

        adjList[x[i]].push_back(make_pair(y[i], z[i]));
        adjList[y[i]].push_back(make_pair(x[i], z[i]));
    }
    const int INF = 7000000;
    for (int i=0;i < V;i++) {
        dist[i]= INF;
        visited[i]= false;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push(make_pair(0, a));
    dist[a]=0;
    while (!pq.empty()) {
        pair<int, int> curr = pq.top();
        pq.pop();
        int source = curr.second;
        int cost = curr.first;
        if (source == b) {
            cout<<dist[b]<<endl;
            return 0;
        }
        if (visited[source]) continue;
        visited[source] = true;
        for (pair <int, int> adj: adjList[source]) {
            if (adj.second + dist[source] < dist[adj.first]) {
                dist[adj.first] = adj.second + dist[source];
                pq.push(make_pair(dist[adj.first], adj.first));
            }
        }
    }
    cout<<-1<<endl;
}