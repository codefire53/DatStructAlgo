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
void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
 void solve() {
     int n,m;
     cin>>n>>m;
     int a[n+1],b[m+1];
     rep(i,0,n) cin>>a[i];
     rep(i,0,m) cin>>b[i];
     sort(a,a+n);
     sort(b,b+m);
     int la=0,lb=0;
     int ans=INF;
     while (la < n && lb < m) {
          ans=min(ans,abs(a[la]-b[lb]));
          if (a[la] < b[lb]) la++;
          else lb++;
     }
     cout<<ans<<endl;
     
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