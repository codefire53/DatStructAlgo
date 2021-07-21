#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int num[m+1];
    for(int i=0;i < m;i++) {
        cin>>num[i];
    }
    sort(num, num+m);
    int leastDiff = 3000;
    for(int i=0; i <= m-n; i++) {
        leastDiff = min(leastDiff, num[i+n-1]-num[i]);
    }
    cout<<leastDiff<<endl;
}