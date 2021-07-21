#include <bits/stdc++.h>
using namespace std;
int main() {
    map <int, int> freq;
    int n,k;
    int ans;
    cin>>n>>k;
    int arr[n+1];
    for(int i=0;i < n;i++){
        cin>>arr[i];
    }
    for(int i=0;i < k;i++) {
        freq[arr[i]]++;
    }
    ans = freq.size();
    for(int i=k;i < n;i++) {
        freq[arr[i]]++;
        freq[arr[i-k]]--;
        if(freq[arr[i-k]]==0) freq.erase(arr[i-k]);
        ans = max(ans, (int) freq.size());
    }
    cout<<ans<<endl;
}