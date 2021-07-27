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
    int n;
    priority_queue<int> stone;
    cin>>n;
    while(n--){
        int op;
        cin>>op;
        if(op==1) {
            int val;
            cin>>val;
            stone.push(val);
        }
        else if(op==2) cout<<stone.top()<<endl;
        
        else stone.pop();
    }
 }

 int main() {
     fastIO();
     int tc;
     tc=1;
     while(tc--) {
        solve(); 
     }
 }