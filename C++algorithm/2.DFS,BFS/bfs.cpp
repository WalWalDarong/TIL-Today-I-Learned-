#include <bits/stdc++.h>
using namespace std;
//bfs: 재귀 없이 가능
int n, m, sy, sx, fy, fx, ny, nx;
bool a[104][104];
int vst[104][104];
int dy[4] = { -1, 0, 1, 0}, dx[4] = { 0, 1, 0, -1};
queue<pair<int, int>> q;
void bfs(int y, int x){
  if(!vst[y][x]) vst[y][x] = 1;  
  q.push({y, x});
  while(q.size()){
    tie(y, x) = q.front();
    q.pop();
    for(int i = 0; i < 4; i++){
      ny = y + dy[i];
      nx = x + dx[i];
      if(ny >= n || nx >= m || ny < 0 || nx < 0) continue;
      if(!vst[ny][nx] && a[ny][nx]) {
        vst[ny][nx] = vst[y][x] + 1;
        q.push({ny, nx}); 
      }
    }
  }
  return;
}
int main(){
  cin >> n >> m >> sy >> sx >> fy >> fx;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }
  
  bfs(sy, sx);
  
  cout << vst[fy][fx] << '\n';

  return 0;
}