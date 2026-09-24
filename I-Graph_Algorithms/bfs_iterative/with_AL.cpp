#include <iostream>
#include <vector>
#include<queue>
using namespace std;

void bfs(int start, vector<vector<int>> &adj, int n) {
    vector visited(n,0);
    queue<int> q;
    q.push(start);
    visited[start]=1;

    while (!q.empty()) {
        int node=q.front();
        cout << node << '\n';
        q.pop();

        for (int &n: adj[node]) {
            if (visited[n]) continue;
            q.push(n);
            visited[n]=1;
        }
    }
}

int main() {
    int n=4;
    vector<vector<int>> adj={
        {2},
        {0, 2},
        {0, 1, 3},
        {2}
    };

    bfs(0,adj,n);

    return 0;
}