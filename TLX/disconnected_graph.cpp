#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define fi first
#define se second
#define pb push_back
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define clea(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;
const int maxe = 2e6+1;
const int maxn = 5e5+1;
bool removed[maxe];
bool visited[maxn];
int special[maxn];
vi adj[maxn];
vector<pii> edges;
void reset() {
    rep(i,0,maxe) removed[i] = false;
    rep(i,0,maxn) {
        visited[i]=false;
        special[i]=0;
        adj[i].clear();
    }
    edges.clear();
}
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
ll dfs(int src, vi adj[]) {
    visited[src] = true;
    ll ans = special[src];
    for (auto dst: adj[src]) {
        if (!visited[dst]) {
            ans += dfs(dst, adj);
        }
    }
    return ans;
}
 void solve() {
     reset();
     int n,r,e,q;
     cin>>n>>e>>q>>r;
     rep(i,0,e) {
         int src,dst;
         cin>>src>>dst;
         src--,dst--;
         edges.pb({src,dst});
         adj[src].pb(dst);
         adj[dst].pb(src);
     }

     rep(i,0,q){
        int tmp;
        cin>>tmp;
        tmp--;
        special[tmp] = 1;
     }
     ll ans=0;
     rep(i,0,n) {
          if(!visited[i]) {
             //cout<<"hello\n";
;             ll total = dfs(i, adj);
             if(total > 1) ans+= total*(total-1)>>1;
         }
     }
     //cout<<ans<<endl;
     init(visited,false);
     rep(i,0,r) {
        int tmp;
        cin>>tmp;
        tmp--;
        removed[tmp] = true;
     }
     rep(i,0,n) {
         adj[i].clear();
     }
     rep(i,0,e) {
         if(!removed[i]) {
            adj[edges[i].fi].pb(edges[i].se);
            adj[edges[i].se].pb(edges[i].fi);
         }
     }
     rep(i,0,n) {
         if(!visited[i]) {
             ll total = dfs(i, adj);
             //cout<<total<<endl;
             if(total > 1)  ans-= total*(total-1)>>1;
         }
     }
     cout<<ans<<endl;
 }

 int main() {
     fastIO();
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }
 }