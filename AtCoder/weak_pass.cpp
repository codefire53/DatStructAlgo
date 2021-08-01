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
     bool same = true;
     bool follow = true;
     rep(i,1,s.length()) {
        if (s[i]!=s[i-1])
            same = false;
        if (((int)s[i]-(int)s[i-1])!=1 && ((int)s[i]-(int)s[i-1])!=-9)
            follow = false;
     }
     //cout<<same<<endl;
     if (same || follow) cout<<"Weak\n";
     else cout<<"Strong\n";
     
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