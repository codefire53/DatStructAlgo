#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n;
    cin>>s;
    int loseIdx=0;
    for(int i=0;i < n;i++) {
        if(s[i]=='1') { 
            loseIdx=i;
            break;
        }
    }
    string ans;
    ans = loseIdx%2==0?"Takahashi":"Aoki";
    cout<<ans<<endl;
}