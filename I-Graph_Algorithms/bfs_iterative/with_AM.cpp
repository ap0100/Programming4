#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, int n) {
    vector visited(n,0);
    queue<int> q;
    q.push(start);
    visited[start]=1;

    while(!q.empty()) {
        int node=q.front();
        cout << node << '\n';
        q.pop();
        for (int i=0; i<adj[node].size(); i++) {
            if (adj[node][i]==1) {
                if (visited[i]) continue;
                q.push(i);
                visited[i]=1;
            }
        }
    }
}

int main() {
    int n=4;
    vector<vector<int>> adj{
        {0, 0, 1, 0},
        {1, 0, 1, 0},
        {1, 1, 0, 1},
        {0, 0, 1, 0}
    };

    bfs(0, adj, n);

    return 0;
}