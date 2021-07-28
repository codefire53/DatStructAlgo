#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define fi first
#define se second
#define INF 1e9
#define pb push_back
#define rep(i,a,b) for(int i=0;i < n;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
vpi adj[101];
int n;
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int prim() {
    bool visited[101]={0};
    int dist[101];
    rep(i,0,100) dist[i]=INF;
    priority_queue<pi, vpi, greater<pi>> frontier;

    dist[0]=0;
    int ans=0;
    frontier.push({0,0}); //{cost, node}
    while(!frontier.empty()) {
        pi curr = frontier.top();
        frontier.pop();
        if (!visited[curr.se]) {
            visited[curr.se] = 1;
            ans += dist[curr.se];
            for(auto nxt: adj[curr.se]) {
                int cost = nxt.se;
                int dest = nxt.fi;
                if (dist[dest] > cost && !visited[dest]) {
                    dist[dest] = cost;
                    frontier.push({dist[dest], dest});
                }
            }
        }
    }
    return ans;
}
void solve() {
   cin>>n;
   rep(i,0,n) 
    rep(j,0,n) {
        int w;
        cin>>w;
        if (i!=j) adj[i].pb({j,w});
    }
    cout<<prim()<<endl;
}

 int main() {
     fastIO();
     int tc;
     tc=1;
     while(tc--) {
        solve(); 
     }
 }