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
     priority_queue<int> delta;
     string s;
     cin>>s;
     int n,sd,sm;
     ll ans=0;
     cin>>n>>sd>>sm;
     if (sd+n-1 < sm) {
         cout<<-1<<endl;
         return;
     }
     rep(i,0,n-1) {
         int p,k,l;
         cin>>p>>k>>l;
         while(sd < p) {
             if(delta.empty()) {
                 cout<<-1<<endl;
                 return;
             }
             ans-=delta.top();
             delta.pop();
             sd++;
         }
         if (l <= k) {
             sd++;
             ans+=l;
         }
         else {
            ans+=k;
            delta.push(k-l);
         }
     }
     while(sd < sm) {
         if(delta.empty()) {
             cout<<-1<<endl;
             return;
         }
         ans-=delta.top();
         delta.pop();
         sd++;
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