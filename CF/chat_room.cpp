#include <bits/stdc++.h>
using namespace std;
int main() {
    string target = "hello";
    string s;
    int matched = 0;
    cin>>s;
    int pos = 0;
    for(int i=0;i < s.length();i++) {
        if (s[i] == target[pos]) { 
            matched++;
            pos++; 
            if (matched == target.length()) {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
}