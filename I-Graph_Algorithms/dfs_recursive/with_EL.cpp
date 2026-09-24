#include <iostream>
#include <vector>
using namespace std;

void dfs(int start, vector<pair<int,int>>& el, vector<int> &visited) {
    if (visited[start]==1) return;
    visited[start]=1;
    cout << start << '\n';
    for (auto &e: el) {
        if (e.first==start) dfs(e.second, el, visited);
        if (e.second == start) dfs(e.first,  el, visited);
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

    vector<int> visited(n,0);

    dfs(0, edges, visited);
    //visited.assign(n,0);

    return 0;
}