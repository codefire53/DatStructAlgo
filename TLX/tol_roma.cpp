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
typedef vector<int> vi;
vi adj[502];
vi adjExc[502];
bool visited[502][2];
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
int bfs(int src, int dst){
    queue<tuple<int,int,int>> frontier;
    frontier.push({src, 0, 1});
    while(!frontier.empty()) {
        int currNode, currScore, remTicket;
        tie(currNode, currScore, remTicket) = frontier.front();
        frontier.pop();
        if (visited[currNode][remTicket]) continue;
        if (currNode==dst) return currScore;
        visited[currNode][remTicket] = 1;
        for (auto nxt: adj[currNode]) {
            frontier.push({nxt,currScore+1,remTicket});
        }
        if (remTicket > 0) {
            for (auto nxt: adjExc[currNode]) {
                frontier.push({nxt,currScore+1,remTicket-1});
            }
        }
    }
    return 0;
}
 void solve() {
     reset(visited);
     int n,l,t,start,end;
     cin>>n>>l>>t>>start>>end;
     start--,end--;
     int src, dst;
     rep(i,0,l) {
         cin>>src>>dst;
         src--,dst--;
         adj[src].pb(dst);
         adj[dst].pb(src);
     }
     rep(i,0,t) {
         cin>>src>>dst;
        src--,dst--;
         adjExc[src].pb(dst);
         adjExc[dst].pb(src);
     }
     cout<<bfs(start,end)<<endl;
 }

 int main() {
     fastIO();
     int tc;
     tc=1;
     while(tc--) {
        solve(); 
     }
 }