#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF 1000000
#define pb(a) push_back(a)
#define loop(i,a,b) for(int i=a;i < b;i++)
#define loopinv(i,a,b) for(int i=a;i >=b;i--)
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
    int n,k;
    cin>>n>>k;
    ll temp[k+1], pos[k+1];
    ll memo[n+1];
    init(memo,INF);
    loop(i,0,k) cin>>pos[i];
    loop(i,0,k) { cin>>temp[i];memo[pos[i]-1] = temp[i]; }
    ll l[n+1],r[n+1];
    init(l, INF);
    init(r, INF);
    //cout<<l[0]<<endl;
    l[0] = min(l[0], memo[0]);
    loop(i,1,n) l[i] = min(l[i-1]+1, memo[i]);
    r[n-1] = min(r[n-1], memo[n-1]);
    loopinv(i,n-2,0) r[i] = min(r[i+1]+1, memo[i]);
    loop(i,0,n) cout<<min(l[i],r[i])<<" ";
    cout<<endl;
}

 int main() {
     fastIO();
     int tc;
     cin>>tc;
     while(tc--) {
        solve(); 
     }
 }