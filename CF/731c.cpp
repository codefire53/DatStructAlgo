#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb(a) push_back(a)
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
     int k,n,m;
     cin>>k>>n>>m;
     int a[n+1],b[m+1];
     loop(i,0,n) cin>>a[i];
     loop(i,0,m) cin>>b[i];
     int posA=0,posB=0;
     vi ans;
     bool correct = true;
     while(posA < n || posB < m) {
         if (posA < n && a[posA] == 0) {
            ans.pb(a[posA]);
            k++;
            posA++;
         }
         else if (posB < m && b[posB] == 0) {
            ans.pb(b[posB]);
            k++;
            posB++;
         }
         else if (posA < n && a[posA] <= k) {
            ans.pb(a[posA]);
            posA++;
         }
         else if (posB< m && b[posB] <= k) {
            ans.pb(b[posB]);
            posB++;
         }
         else {
             correct = false;
             break;
         }
     }
     if (!correct) cout<<-1<<endl;
     else {
         for (int num : ans) cout<<num<<" ";
         cout<<endl;
     }
 }

 int main() {
     fastIO();
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }
 }