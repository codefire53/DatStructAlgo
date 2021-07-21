#include <bits/stdc++.h>
using namespace std;
int search(string s, char c) {
    for(int i=0;i < s.length(); i++) {
        if(c==s[i])
            return i;
    }
    return -1;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--) {
        string s;
        cin>>s;
        int L = search(s, 'a');
        if (L == -1) {
            cout<<"NO\n";
            continue;
        }
        
        int R = L+1, n = s.length();
        L--;
        for (int i=1;i < n;i++) {
            char curr =  char('a' + i);
            if (L >= 0 && R <= n-1) {
                if (s[L] != curr && s[R] != curr)
                    break;
                if (s[L]==curr)
                    L--;
                else 
                    R++;
            }
            else if(L >= 0) {
                if (s[L] != curr)
                    break;
                L--;
            }
            else if(R <=n-1) {
                if (s[R] != curr)
                    break;
                R++;
            }   
            else break;
        }
        //cout<<L<<endl;
        //cout<<R<<endl;
        if (L < 0 && R > n-1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}