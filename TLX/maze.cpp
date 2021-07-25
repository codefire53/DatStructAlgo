#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define pf pop_front
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define clear(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
 void solve() {
    int maze[101][101];
     int n,m;
     cin>>n>>m;

     rep(i,0,n) 
        rep(j,0, m)
            cin>>maze[i][j];
    queue<tuple<int,int,int>> frontier;
    int v,h;
    cin>>v>>h;
    v--,h--;
    frontier.push({v,h,1});
    //bfs
    while(!frontier.empty()) {
        int curr_x,curr_y,curr_cost;
        tie(curr_y,curr_x,curr_cost) = frontier.front();
        frontier.pop();
        maze[curr_y][curr_x] = -1;
        if (curr_y==0 || curr_y==n-1 || curr_x==0 || curr_x==m-1) {
            cout<<curr_cost<<endl;
            return;
        }
        for(int i=-1;i <= 1;i+=2) {
            if (curr_y+i >= 0 && curr_y+i < n && maze[curr_y+i][curr_x]!=-1)
                frontier.push({curr_y+i, curr_x, curr_cost+1});
        }
        for(int i=-1;i <= 1;i+=2) {
            if (curr_x+i >= 0 && curr_x+i < m && maze[curr_y][curr_x+i]!=-1)
                frontier.push({curr_y, curr_x+i, curr_cost+1});
        }
    }
 }

 int main() {
     fastIO();
     solve();
     /*
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }*/
 }