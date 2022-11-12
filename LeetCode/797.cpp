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
    vector<vector<int>> res;
    vector<int> path;
    void dfs(vector<vector<int>> &graph, int pos, int end) {
        path.pb(pos);
        if (pos==end) res.pb(path);
        else for (int next: graph[pos]) dfs(graph, next, end);
        path.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dfs(graph, 0, graph.size()-1);
        return res;
    }
};