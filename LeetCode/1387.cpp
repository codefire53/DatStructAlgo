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
        int getPower(int num, unordered_map<int, int>& memo) {
            if (memo.find(num) != memo.end()) return memo[num];
            if (pow(2, (int)log2(num)) == num) memo[num] = log2(num);
            else  memo[num] = num%2==0 ? getPower(num/2, memo) + 1 : getPower(3*num+1, memo) + 1;
            return memo[num];
        }
    public:
        int getKth(int lo, int hi, int k) {
            unordered_map<int, int> memo;
            memo[1] = 0;
            memo[2] = 1;
            pq<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> heap;
            rep(i,lo, hi+1) {
                heap.push({getPower(i, memo),i});
            }
            while(--k) {
                heap.pop();
            }
            return heap.top().second;
        }

};