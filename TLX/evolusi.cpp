#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define ppb pop_back
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
typedef vector<string> vs;
const int maxn=1e5+1;

vs ans;
map<string, vs> adj;
map<string, bool> visited;

void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

bool dfs(string pos, string goal) {
    ans.pb(pos);
    visited[pos] = 1;
    if (pos==goal) {
        return 1;
    }
    bool found = 0;
    for(string dst: adj[pos]) {
        if (!visited[dst]) {
            found=dfs(dst, goal);
            if (found) return 1;
        }
    }
    ans.ppb();
    return found;
}

void solve() {
    map<string, int> code;
    int n,m;
    cin>>n>>m;
    rep(i,0,m) {
        string src,dst;
        cin>>src>>dst;
        adj[src].pb(dst);
    }
    string name1,name2;
    cin>>name1>>name2;
    if(dfs(name1, name2)) {
        for(auto spec: ans) cout<<spec<<endl;
        return;
    }
    visited.clear();
    if(dfs(name2, name1)) {
        for(auto spec: ans) cout<<spec<<endl;
        return;
    }
    cout<<"TIDAK MUNGKIN\n";
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