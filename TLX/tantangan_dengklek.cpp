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
map<string, bool> visited;
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
string shuff(string s, int l, int r) {
    string shuffled = s;
    for(int i=l,j=r;i <= j;i++,j--)  swap(shuffled[i], shuffled[j]);
    return shuffled;
}
int bfs(string s, int k) {
    queue<pair<string,int>> frontier;
    string goal;
    int n=s.length();
    rep(i,0,n) goal.pb(i+1+'0');
    frontier.push({s,0});

    while(!frontier.empty()) {
        int currScore = frontier.front().second;
        string currString = frontier.front().first;
        frontier.pop();
        if (visited[currString]) continue;
        visited[currString] = 1;

        if (currString == goal) return currScore;
        rep(i,0,n-k+1) {
            string shuffled = shuff(currString,i,i+k-1);
            if(!visited[shuffled]) frontier.push({shuffled, currScore+1});
        }
    }
    return -1;

}
 void solve() {
     int n;
     cin>>n;
     string s;
     rep(i,0,n){
        int num;
        cin>>num;
        s.pb(num+'0');
    }
    int k;
    cin>>k;
    cout<<bfs(s,k)<<endl;

 }

 int main() {
     fastIO();
     int tc;
     tc=1;
     while(tc--) {
        solve(); 
     }
 }