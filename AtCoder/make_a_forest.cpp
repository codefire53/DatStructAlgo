#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
vector<pair<int, pair<int, int>>> edges;
unordered_map<int, int> rem;
typedef vector<int> vi;
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
 void solve() {
     int n.m;
     cin>>n>>m;
     rep(i,0,n) {
         int par,chd,cst;
         cin>>par>>chd>>cst;
         edges.pb({cst, {par,chd}});
     }
     sort(edges, edges+n);
     int ans=0;
    rep(i,0,n) {
        if(rem[edges[0].se.fi]==0){
            ans++;
            rem[edges[0].se.fi]=m;
        }
        rem[edges[0].se.fi]--;
        rem[edges[0].se.se]+=m;
    }
    cout<<ans<<endl;
 }
 
 int main() {
     fastIO();
     int tc;
     tc=1;
     //cin>>tc;
     while(tc--) {
        solve(); 
     }
 }