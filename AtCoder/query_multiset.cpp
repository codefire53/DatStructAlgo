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
    priority_queue<ll, vector<ll>, greater<ll> >pq;
	int q, p;
	ll x;
	ll sum = 0;
	cin >> q;
	while(q--) {
		cin >> p;
		if (p == 1) {
			cin >> x;
			pq.push(x - sum);
		}
		else if (p == 2) {
			cin >> x;
			sum += x;
		}
		else if (p == 3) {
			x = pq.top();
			cout << x + sum << endl;
			pq.pop();
		}
	}
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