#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF 1e9+1
#define pb push_back
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
vi ans;
priority_queue <int, vector<int>, greater<int> > pq[200001];
bool visited[200001] = {0};
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
void dfs(int pos, int lastPos) {
    visited[pos]=true;
    ans.pb(pos);
    int next;
    while(!pq[pos].empty()) {
        next=pq[pos].top();
        pq[pos].pop();
        if (visited[next]) continue;
        dfs(next, pos);
        ans.pb(pos);
    }
}
 void solve() {
     int n;
     cin>>n;

    rep(i,0,n-1) {
        int a,b;
        cin>>a>>b;
        pq[a].push(b);
        pq[b].push(a);
    }
    dfs(1,-1);
    for(auto &node: ans) {
        cout<<node<<" ";
       
    }
    cout<<endl;
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