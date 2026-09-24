#include <iostream>
#include <vector>
using namespace std;

void dfs(int start, vector<vector<int>> &adj, vector<int> &visited) {
    if (visited[start]==1) return;
    visited[start]=1;
    cout << start << '\n';
    for (int i=0; i<adj[start].size(); i++)
        dfs(adj[start][i], adj, visited);
}

int main() {
    int n=4;
    vector<vector<int>> adj={
        {2},
        {0, 2},
        {0, 1, 3},
        {2}
    };

    vector<int> visited(n,0);

    dfs(0, adj);
    //visited.assign(n,0);

    return 0;
}