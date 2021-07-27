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
     string s;
     cin>>s;
     int n;
     cin>>n;
     int arr[n+1];
     rep(i,0,n) cin>>arr[i];
     ll ans=0;
     ll curr=1;
     rep(i,1,n) {
         if (arr[i]!=arr[i-1]) {
             ans+=curr*(curr+1)>>1;
             curr=0;
         }
         curr++;
     }
     ans+=curr*(curr+1)>>1;
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