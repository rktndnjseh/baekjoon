#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool visited[1001];
bool visited1[1001];
void dfs(int node) {
    visited[node] = true;
    cout << node << " ";
    
    for (size_t  i = 0; i < graph[node].size(); i++) {
        int next = graph[node][i];
        if (!visited[next]) {
            dfs(next);
        }
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start);
    visited1[start] = true;

    while(!q.empty()){
        int current = q.front();
        q.pop();
        cout<< current << " ";

        for (size_t  i = 0; i < graph[current].size(); i++) {
            int next = graph[current][i];
            if (!visited1[next]) {
                q.push(next);
                visited1[next] = true;
            }
        }
    }
}
int main() {
    int n, m, start;
 
    cin >> n >> m >> start;
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
   for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
 
    dfs(start);
    cout<<"\n";
    bfs(start);
}
