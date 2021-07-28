#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF 1e9
#define pb push_back
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
void solve() {
    int dist[201][201];
    int n,m,q;
    cin>>n>>m>>q;
    
    rep(i,0,200)
        rep(j,0,200) {
            dist[i][j]=i==j?0:INF;
        }
    rep(i,0,m) {
        int u,v,w;
        cin>>u>>v>>w;
        u--,v--;
        dist[u][v] = min(dist[u][v], w);
        dist[v][u] = min(dist[v][u], w);
        //cout<<dist[u][v]<<endl;
    }
    rep(k,0,n)
        rep(i,0,n)
            rep(j,0,n) {
                //cout<<dist[i][j]<<endl;
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
    int nxt,now;
    int ans=0;
    cin>>nxt;
    nxt--;
    now=nxt;
    q--;
    while(q--) {
        cin>>nxt;
        nxt--;
        //cout<<dist[now][nxt]<<endl;
        ans += dist[now][nxt];
        now = nxt;
    }
    cout<<ans<<endl;
}

 int main() {
     fastIO();
     int tc;
     tc=1;
     while(tc--) {
        solve(); 
     }
 }