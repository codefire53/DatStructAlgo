#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,x,y;
    cin>>n>>a>>x>>y;
    int ans;
    ans = n > a? (n-a)*y + a*x:n*x;
    cout<<ans<<endl;
}