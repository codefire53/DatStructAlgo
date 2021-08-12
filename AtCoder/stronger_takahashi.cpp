#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF 1e9
#define pb push_back
#define fi first
#define se second
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;
char maze[501][501];
int dist[501][501];
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
bool isBounded(pair<int,int> c, pair<int,int>e) {
    return c.fi>=0 && c.fi<=e.fi && c.se>=0 && c.se<=e.se;
}
int bfs(pair<int,int> s, pair<int,int>e) {
    bool visited[501][501];
    int inc[4][2] = {{0,1}, {0,-1}, {1,0}, {-1,0}};
    rep(i,0,e.fi+1) 
        rep(j,0,e.se+1)
            dist[i][j]=INF, visited[i][j]=0;
    deque<pair<int, int>> q;
    q.push_back({s.fi, s.se});
    dist[s.fi][s.se]=0;
    while(!q.empty()) {

        pair<int, int> curr = q.front();
        q.pop_front();
        if (visited[curr.fi][curr.se]) continue;
        if (curr.fi==e.fi && curr.se==e.se) return dist[e.fi][e.se];
        visited[curr.fi][curr.se]=1;
        int next_r,next_c;
        rep(i,0,4) {     
            next_r=curr.fi+inc[i][0],next_c=curr.se+inc[i][1];
            if (!isBounded({next_r,next_c}, e) || maze[next_r][next_c]=='#') continue;
            if (dist[curr.fi][curr.se] < dist[next_r][next_c]) {
                dist[next_r][next_c] = dist[curr.fi][curr.se];
                q.push_front({next_r, next_c});
            }
        }
        rep(dr,-2, 3) {
            rep(dc,-2,3) {
                if (abs(dr)+abs(dc) > 3) continue;
                next_r=curr.fi+dr,next_c=curr.se+dc;
                if (!isBounded({next_r,next_c}, e)) continue;
                if (dist[curr.fi][curr.se] + 1 < dist[next_r][next_c]) {
                    dist[next_r][next_c] = dist[curr.fi][curr.se] + 1;
                    q.push_back({next_r, next_c});
                }
            }
        }
    }
    return -1;
}
 void solve() {
     int h,w;
     cin>>h>>w;
     rep(i,0,h)
        {
            string s;
            cin>>s;
            rep(j,0,w) 
                maze[i][j]=s[j];
        }
    pair<int,int> start={0,0};
    pair<int,int> end={h-1,w-1};
    cout<<bfs(start,end)<<endl;
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