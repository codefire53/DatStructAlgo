#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct edge{
    ll source, dest, cost;
};
const ll inf = 1e9;
edge edges[1001];
int V, E;
ll dist[501];
int bf() {
    for(int i=0;i < V;i++) dist[i]=inf;
    dist[0]=0;
    for (int i=1;i < V;i++) {
        for (int j=0;j < E;j++) {
            edge curr = edges[j];
            if (dist[curr.source]!=inf && dist[curr.source]+ curr.cost < dist[curr.dest]) {
                dist[curr.dest] = dist[curr.source]+ curr.cost;
            }
        }
    }
    //Check if there is negative weight cycle
    for (int i=0;i < E;i++) {
        edge curr = edges[i];
        if (dist[curr.source]!=inf && dist[curr.source]+ curr.cost < dist[curr.dest]) {
            return 0;
        }
    }
    if (dist[V-1] == inf) return -1;
    return 1;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        cin>>V>>E;
        for (int i=0;i < E;i++) {
            ll s,d,c;
            cin>>s>>d>>c;
            edges[i]= {s,d,c};
        }
        int flag = bf();
        if (flag == -1) cout<<"Tidak ada jalan\n";
        else if(flag == 0) cout<<"Pak Dengklek tidak mau pulang\n";
        else cout<<dist[V-1]<<endl;
    }
    return 0;
}