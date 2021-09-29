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
     int n;
     cin>>n;
     int a[n+1],b[n+1];
     for (int i=0;i < n;i++) {
         cin>>a[i];
         b[i]=a[i];
     }
     sort(b, b+n);
     vector <tuple<int, int, int>> ans;
     for(int i=0;i < n;i++) {
         int shift=0;
         while(a[i]!=b[i]) {
             int start = a[i];
             for(int j=i;j < n-1;j++) a[j]=a[j+1];
             a[n-1] = start;
             shift++;
         }
         if (shift) ans.push_back({i+1, n, shift});
     }
     cout<<(int)ans.size()<<endl;
     for (auto tup: ans) {
         cout<<get<0>(tup)<<" "<<get<1>(tup)<<" "<<get<2>(tup)<<endl;
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