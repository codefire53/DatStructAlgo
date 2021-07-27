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
vi adj[maxn];
string name[maxn];
bool visited[maxn];

void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

bool dfs(int pos, int goal) {
    if (pos==goal) {
        return true;
    }
    visited[pos] = 1;
    rep(i,0,adj[pos].size()) {
        if (!visited[adj[pos][i]]) {
            ans.pb(name[adj[pos][i]]);
            bool found=dfs(adj[pos][i], goal);
            if (found) return true;
            ans.ppb();
        }
    }
    return false;
}

void solve() {
    map<string, int> code;
    int idx=1;
    int n,m;
    cin>>n>>m;
    rep(i,0,m) {
        string src,dst;
        cin>>src>>dst;
        if(code[src]==0) {
            code[src]=idx;
            name[idx]=src;
            idx++;
        }
        if(code[dst]==0) {
            code[dst]=idx;
            name[idx]=dst;
            idx++;
        }
        adj[code[src]].pb(code[dst]);
    }
    string name1,name2;
    cin>>name1>>name2;
    ans.pb(name1);
    if(dfs(code[name1], code[name2])) {
        for(auto s: ans) {
            cout<<s<<endl;
        }
        return;
    }
    ans.clear();
    reset(visited);
    ans.pb(name2);
    if(dfs(code[name2], code[name1])) {
        for(auto s: ans) {
            cout<<s<<endl;
        }
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