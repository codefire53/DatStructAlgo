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
     int n;
     cin>>n;
     int nums[200001];
     int maxVal=-1, maxSecVal=-1;
     int maxIdx, maxSecIdx;
     int num;
     rep(i,0,n) {
         cin>>nums[i];
     }

     rep(i,0,n) {

         if(nums[i] > maxVal) {
             maxSecVal=maxVal;
             maxVal=nums[i];
            maxSecIdx=maxIdx;
             maxIdx=i;

         }
         else if (nums[i] > maxSecVal && nums[i] <= maxVal) {
             maxSecIdx=i;
             maxSecVal=nums[i];
         }
        //cout<<maxSecIdx<<endl;
     }
     
     cout<<maxSecIdx+1<<endl;
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