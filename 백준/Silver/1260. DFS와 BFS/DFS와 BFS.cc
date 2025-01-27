#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<int>graph[1001];
bool visited[1001];
bool visited1[1001];

void dfs(int node){
    visited[node] = true;
    cout << node << " ";

    for(size_t i = 0;i < graph[node].size(); i++){
        int next = graph[node][i];
        if(!visited[next]){
            dfs(next);
        }
    }
}
void bfs(int start){
    visited1[start] = true;
    queue <int>q;
    q.push(start);

    while(!q.empty()){
        int current = q.front();
        q.pop();
        cout << current << " ";
        for(size_t i = 0; i < graph[current].size(); i++){
            int next = graph[current][i];
            if(!visited1[next]){
                q.push(next);
                visited1[next]= true;
             }
        }
    }
}
int main(){
    int N, M, V;
    cin>>N>>M>>V;
    for(int i=0;i<M;i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);    
    }   
    for(int i=0;i<=N;i++){
        sort(graph[i].begin(), graph[i].end());
    }
    dfs(V);
    cout<<"\n";
    bfs(V);
}