#include <bits/stdc++.h>
using namespace std;
int main() {
    int freq[4];
    string s;
    cin>>s;
    for(int i=1;i < 4;i++)
        freq[i]=0;
    for(int i=0;i < s.length();i++) {
        if(s[i]!='+')
            freq[(s[i] - '0')]++;
        
    }
    
    string ans="";

    for(int i=1;i < 4;i++) {
        while(freq[i] > 0) {
            ans+=to_string(i);
            if (ans.length() < s.length())
                ans+="+";
            freq[i]--;
        }
    }
    cout<<ans<<endl;
    
}