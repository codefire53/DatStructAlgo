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
private: 
    int memo[1001][1001] = {0};
    int solve(string s, int left, int right) {
        if (left >= right) return 1;
        if (memo[left][right] != 0) return memo[left][right];
        return memo[left][right] = s[left] == s[right] ? solve(s, left+1, right-1) : -1; 
    }

public:
    int countSubstrings(string s) {
        int ans = 0;
        rep(i,0,s.length()) {
            rep(j,i,s.length()) {
                int res = solve(s, i, j);
                ans += max(res,0);
            }
        }
        return ans;
    }

};