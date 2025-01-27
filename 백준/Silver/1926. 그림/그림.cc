#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
int graph[500][500];
bool visited[500][500];

int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

int bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y] = true;
    int area = 1;

    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(int i=0;i<4;i++){
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if(nx>=0&&ny>=0&&ny<m&&nx<n&&graph[nx][ny]==1&&!visited[nx][ny]){
               q.push({nx, ny});
               visited[nx][ny] = true;
               area++; 
            }
        }
    }
    return area;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int max_area = 0, count = 0;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> graph[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j] && graph[i][j]){
                count++;
                max_area = max(max_area, bfs(i, j));
            }
        }
    }
    cout << count <<"\n"<< max_area;
}