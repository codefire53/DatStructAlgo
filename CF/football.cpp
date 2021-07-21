#include <bits/stdc++.h>
using namespace std;
int main() {
    int repeatCount = 1;
    string s;
    cin>>s;
    for(int i=1;i < s.length(); i++) {
        if (s[i]==s[i-1]) {
            repeatCount++;
            if (repeatCount >= 7) { 
                cout<<"YES\n"; 
                return 0; 
            }
        }
        else repeatCount=1;
    }
    cout<<"NO\n";
}