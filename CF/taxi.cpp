#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int groups[4];
    for(int i=0;i < 4;i++)
        groups[i]=0;
    cin>>n;
    int cnt;
    for(int i=0;i < n;i++) {
        cin>>cnt;
        groups[cnt-1]++;  
    }
    int ans;
    ans = groups[3] + groups[2] + groups[1]/2;
    groups[0] -= groups[2];
    if (groups[1]%2 != 0) {
        ans++;
        groups[0] -= 2;
    }
    if (groups[0] > 0) {
        ans += (groups[0] + 3)/4;
    }
    cout<<ans<<endl;
}