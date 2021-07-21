#include <bits/stdc++.h>
using namespace std;
int main() {
    int k,n,w;
    cin>>k>>n>>w;
    int req=0;
    for(int i=0;i < w;i++)
        req+=(i+1)*k;
    int ans = req>n?req-n:0;
    cout<<ans<<endl;
}