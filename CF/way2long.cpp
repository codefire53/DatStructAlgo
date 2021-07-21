#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    string s;
    string ans;
    while(tc--) {
        ans="";
        cin>>s;
        if (s.length() <= 10) {
            cout<<s<<endl;
            continue;
        }
        ans+=s[0];
        int cnt=0;
        for(int i=1;i < s.length()-1;i++) {
            cnt++;
        }
        ans+=to_string(cnt);
        ans+=s[s.length()-1];
        cout<<ans<<endl;
    }
}