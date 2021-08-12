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
/*
stack<int> toBins(int num) {
    stack<int> ans;
    while(num > 0) {
        ans.push(num%2);
        num/=2;
    }
}
int toDec(stack<int> bins) }{
    int ans=0;
    int mul=1;
    while(!bins.empty()) {
        ans+=bins.top()*mul;
        mul*=2;
    }
    return ans;
}*/
 void solve() {
     int a,b;
     cin>>a>>b;
     int ans=a^b;
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