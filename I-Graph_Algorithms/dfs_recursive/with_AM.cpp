#include <iostream>
#include <vector>
using namespace std;

void dfs(int start, vector<vector<int>> &adj, vector<int> &visited) {
    if (visited[start]==1) return;
    visited[start]=1;
    cout << start << '\n';
    for (int i=0; i<4; i++)
        if (adj[start][i]==1) dfs(i, adj, visited);
}

int main() {
    int n=4;
    vector<vector<int>> adj{
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };

    vector<int> visited(n,0);

    dfs(0, adj, visited);
    //visited.assign(n,0);

    return 0;
}
