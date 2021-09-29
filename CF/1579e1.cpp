#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define pf push_front
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
    deque<int> num_queue;
    loop(i,0,n) {
        int num;
        cin>>num;
        if (num_queue.empty()) {
            num_queue.pb(num);
            continue;
        }
        if (num < num_queue.front()) num_queue.pf(num);
        else num_queue.pb(num);
    }
    for (int num: num_queue) cout<<num<<" ";
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