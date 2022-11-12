#include <bits/stdc++.h>
#define ll long long 
#define ld long double
#define INF INT_MAX
#define pb push_back
#define pq priority_queue
#define rep(i,a,b) for(int i=a;i < b;i++)
#define per(i,a,b) for(int i=a;i >= b;i--)
#define reset(a) memset(a, 0, sizeof a)
#define init(a, b) memset(a, b, sizeof a)
using namespace std;

class Solution {
public:
    int memo[40][40] = {0};

    int dfsWithDp(int start, int end, vector<int> &arr) {
        if (start==end) return 0;
        if (memo[start][end] != 0)  return memo[start][end];
        int ans=INT_MAX;
        rep(mid,start,end) {
            int leftNonLeafMinSum = dfsWithDp(start, mid, arr);
            int rightNonLeafMinSum = dfsWithDp(mid+1, end, arr);
            int leftMaxLeaf = -1; int rightMaxLeaf = -1;
            rep(i, start, mid+1) leftMaxLeaf = max(leftMaxLeaf, arr[i]);
            rep(i, mid+1, end+1) rightMaxLeaf = max(rightMaxLeaf, arr[i]);
            ans = min(ans, leftNonLeafMinSum + rightNonLeafMinSum + leftMaxLeaf*rightMaxLeaf);
        }
        return memo[start][end] = ans;
    }

    int mctFromLeafValues(vector<int>& arr) {
        return dfsWithDp(0,  arr.size()-1, arr);
    }
};