#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        int n;

        int pos[100001][2];
        memset(pos,0,sizeof pos);

        cin>>n;
        int a[n+1];
        for(int i=0;i < n;i++) {
            cin>>a[i];
            pos[a[i]][i&1]--;
        }
        sort(a, a+n);
        for (int i=0;i < n;i++) pos[a[i]][i&1]++;
        bool flag = true;
        for (int i=0;i < n;i++) {
            if(pos[a[i]][0] != 0 || pos[a[i]][1] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
}