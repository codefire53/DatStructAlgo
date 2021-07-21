#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    return ch=='a' || ch=='i' || ch=='u' || ch=='e' || ch=='o' || ch=='y' || ch=='A' || ch=='I' || ch=='U' || ch=='E' || ch=='O' || ch=='Y';
}
int main() {
    string s, ans;
    cin>>s;
    ans="";
    for(int i=0;i < s.length();i++) {
        if(isVowel(s[i]))
            continue;
        ans+='.';
        ans+=towlower(s[i]);
    }
    cout<<ans;
}