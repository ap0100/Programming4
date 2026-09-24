#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<pair<int,int>> &el, int n) {
    vector visited(n, 0);
    queue<int> q;
    q.push(start);
    visited[start]=1;

    while(!q.empty()) {
        int node=q.front();
        cout << node << '\n';
        q.pop();

        for (auto &e: el) {
            if (e.first==node) {
                if (visited[e.second]) continue;
                q.push(e.second);
                visited[e.second]=1;
            }
        }
    }
}

int main() {
    int n=4;
    vector<pair<int, int>> edges={
        {0, 2},
        {1, 0},{1, 2},
        {2, 0},{2, 1},{2, 3},
        {3, 2}
    };

    bfs(0,edges,n);

    return 0;
}