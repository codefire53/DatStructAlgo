#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF 1000000
#define pb(a) push_back(a)
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >=b;i--)
#define clear(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
typedef set<int> si;
typedef vector<vector<int>> vivi;
si many[2];
vivi adj;
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
void dfs(int src, vi& flag, bool append) {
    flag[src] = 1;
    for (int dst: adj[src]) {
        if (flag[dst] == 0)
            dfs(dst, flag, append);
        else if (append)
            many[flag[dst]-1].insert(dst);
    }
    flag[src] = 2;
}

 void solve() {
    int n,m;
    cin>>n>>m;
    adj = vivi(n+1);
    rep(i,0,2)
    many[i] = si();
    rep(i,0,m) {
        int src,dst;
        cin>>src>>dst;
        src--,dst--;
        adj[src].pb(dst);
    }
    vi flag = vi(n+1);
    dfs(0, flag, true);
    vivi flag2(2, vi(n));
    rep(i,0,2)
    for (auto src: many[i])
        dfs(src, flag2[i], false);
    rep(i,0,n) {
        int ans = 0;
        if (flag[i]!=0) {
            ans = 1;
            if (flag2[0][i])
                ans = -1;
            else if(flag2[1][i])
                ans = 2;
        }
        cout<<ans<<" ";
    }
    cout<<endl;

}

 int main() {
     fastIO();
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }
 }