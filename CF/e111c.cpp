#include <bits/stdc++.h>
#define ll long long 
#define ld long double;
#define loop(i,a,b) for(int i=a;i < b;i++)
#define clear(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
 bool validBound(int l, int r, int arr[]) {
     loop(a,l,r-2){
         loop(b,a+1,r-1) {
             loop(c,b+1,r) {
                 if ((arr[a] <= arr[b] && arr[b] <= arr[c]) || (arr[a] >= arr[b] && arr[b] >= arr[c]))
                    return false;
             }
         }
     }
     return true;
 }
 void solve() {
     int n;
     int arr[n+1];
     cin>>n;
     int ans=0;
     loop(i,0,n) cin>>arr[i];
     loop(i,0,n) {
         loop(j,i,n) {
             if(!validBound(i,j+1, arr)) break;
             ans++;
         } 
     }
    cout<<ans<<endl;

 }

 int main() {
     fastIO();
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }
 }