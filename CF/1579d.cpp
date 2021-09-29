    #include <bits/stdc++.h>
    #define ll long long 
    #define ld long double
    #define INF INT_MAX
    #define pb push_back
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
        priority_queue<pair<int, int>> social;
        int n;
        cin>>n;
        loop(i,0,n) {
            int val;
            cin>>val;
            if (val > 0) social.push({val, i+1});
        }
        vector<pair<int, int>> ans;
        while (social.size() >= 2) {
            auto person1 = social.top();
            social.pop();
            auto person2 = social.top();
            social.pop();
            ans.pb({person1.second, person2.second});
            person1.first--;
            person2.first--;
            if (person1.first > 0) social.push({person1.first, person1.second});
            if (person2.first > 0) social.push({person2.first, person2.second});
        }
        cout<<(int)ans.size()<<endl;
        for (auto person: ans) {
            cout<<person.first<<" "<<person.second<<endl;
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