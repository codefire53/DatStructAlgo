#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int x,y,z;
    int x_res=0, y_res=0, z_res=0;
    while(n--) {
        cin>>x>>y>>z;
        x_res+=x;
        y_res+=y;
        z_res+=z;
    }
    if (x_res==0 && y_res==0 && z_res==0)
        cout<<"YES\n";
    else cout<<"NO\n";
}