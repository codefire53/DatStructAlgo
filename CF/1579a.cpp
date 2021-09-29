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
    unordered_map<char, int> letter_freq;
    letter_freq['A'] = 0;
    letter_freq['B'] = 0;
    letter_freq['C'] = 0;
    string s;
    cin>>s;
    for (auto &ch: s) {
        letter_freq[ch]++;
    }
    string ans = letter_freq['A']+letter_freq['C']==letter_freq['B'] ? "YES":"NO";
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