#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;
typedef vector<int> vi;

void fastIO(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int findParent(int x, int parent[]) {
    if(parent[x]==x) return x;
    parent[x] = findParent(parent[x], parent);
    return parent[x];
}

void join(int a, int b, int parent[]) {
    int parentA = findParent(a, parent);
    int parentB = findParent(b, parent);
    parent[parentA] = parentB;
}

bool check(int a, int b, int parent[]) {
    return findParent(a, parent) == findParent(b, parent);
}

 void solve() {
    int n,q;
    cin>>n>>q;
    int parent[n+1];
    rep(i,0,n) parent[i]=i; 
    rep(i,0,q) {
        int op,num1,num2;
        cin>>op>>num1>>num2;
        num1--,num2--;
        if (op==1)
            join(num1,num2,parent);
        else{
            char ans=check(num1,num2,parent)?'Y':'T';
            cout<<ans<<endl;
        }
    }
 }

 int main() {
     fastIO();
     int tc;
     tc=1;
     while(tc--) {
        solve(); 
     }
 }