#include <bits/stdc++.h>
using namespace std;
int main() {
    int p;
    int ans=0;
    int a,b,c;
    cin>>p;
    while(p--) {
        cin>>a>>b>>c;
        if (a+b+c >= 2)
            ans++;
    }
    cout<<ans<<endl;
}