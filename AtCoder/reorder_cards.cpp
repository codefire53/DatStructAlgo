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
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

 void solve() {
     int h,w,n;
     cin>>h>>w>>n;
     vi X,sorted_X,Y,sorted_Y;
     int x,y;
     rep(i,0,n) {
         cin>>x>>y;
         x--,y--;
         X.pb(x),Y.pb(y);
         sorted_X.pb(x),sorted_Y.pb(y);
     }
     sort(sorted_X.begin(),sorted_X.end());
     sort(sorted_Y.begin(),sorted_Y.end());
     map<int,int> X_coords;
     map<int,int> Y_coords;
     rep(i,0,n) {
         X_coords[sorted_X[i]] = i;
         Y_coords[sorted_Y[i]] = i;
     }
     rep(i,0,n) {
         cout<<X_coords[X[i]]+1<<" "<<Y_coords[Y[i]]+1<<endl;
     }
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