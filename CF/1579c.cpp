#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define loop(i,a,b) for(int i=a;i < b;i++)
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
    char board[20][20];
    bool visited[20][20];
    memset(visited, false, sizeof visited);
    int n,m,k;
    cin>>n>>m>>k;
    loop(i, 0, n)
        loop(j, 0, m)
            cin>>board[i][j];
    for(int i=k;i < n;i++) 
        for(int j=k;j+k < m;j++) {
            if(board[i][j]=='*') {
                bool check = true;
                loop(d, 1, k+1) if (board[i-d][j-d]!='*' || board[i-d][j+d]!='*') check=false;
                if (check) {
                    visited[i][j] = true;
                    loop(d, 1, k+1) visited[i-d][j-d]=visited[i-d][j+d]=true;
                    for (int d=k+1;i-d>=0&&j-d>=0&&j+d<m&&board[i-d][j-d]=='*'&&board[i-d][j+d]=='*';d++) visited[i-d][j-d]=visited[i-d][j+d]=true;
                }
            }
        }
    bool left=false;
    loop(i,0,n)
        loop(j,0,m)
            if(board[i][j]=='*' && !visited[i][j]) left=true;
    string ans = left?"NO\n":"YES\n";
    cout<<ans;
 }

 int main() {
     fastIO();
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }
 }