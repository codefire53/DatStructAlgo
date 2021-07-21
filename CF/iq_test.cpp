#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int even = 0, odd = 0;
    cin>>n;
    int num;
    int lastEven, lastOdd;
    for(int i=0;i < n;i++) {
        cin>>num;
        if(num%2==0) {even++;lastEven=i+1;}
        else {odd++;lastOdd=i+1;}
    }
    int ans = odd==1?lastOdd:lastEven;
    cout<<ans<<endl;
    
}