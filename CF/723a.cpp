#include <bits/stdc++.h>
using namespace std;
int main() {
    int plus[101] = { 0 }, minus[101] = { 0 };
    int a[101], b[101];
    int pl,mn;
    int tc;
    cin>>tc;
    while(tc--) {
        int n;
        cin>>n;
        int diff = 0;
        for(int i=0;i < n;i++) {
            cin>>a[i];
        }
        for(int i=0;i  < n;i++) {
            cin>>b[i];
            diff += a[i]-b[i];
        }
        if (diff) {
            cout<<-1<<endl;
            continue;
        }
        pl=0;
        mn=0;
        for(int i=0;i < n;i++) {
            while(a[i] < b[i]) {a[i]++;plus[pl++]=i+1;}
            while(a[i] > b[i]) {a[i]--;minus[mn++]=i+1;}
        }
        cout<<pl<<endl;
        for(int i=0;i < pl;i++) {
            cout<<minus[i]<<" "<<plus[i]<<endl;
        }
    }

}