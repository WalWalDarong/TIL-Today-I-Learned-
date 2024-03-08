#include <bits/stdc++.h>
using namespace std;
//2차원 배열 dfs
//배열 크기는 넉넉하게 최대값으로
int n, m, ret;
bool a[104][104], vst[104][104];
int dy[4] = { -1, 0, 1, 0}, dx[4] = { 0, 1, 0, -1};
void dfs(int y, int x){
  vst[y][x] = 1;

  for(int i = 0; i < 4; i++){
    int ny = y + dy[i];
    int nx = x + dx[i];
    if(ny >= n || ny < 0 || nx >= m || nx < 0) continue;
    if(!vst[ny][nx] && a[ny][nx]) dfs(ny, nx);
  }
  return;
}

int main(){
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin >> a[i][j];
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(a[i][j] == 1 && vst[i][j] == 0) {
        dfs(i, j); 
        ret++;}
    } 
    
  }

  cout << ret <<"\n";
  
  return 0;
}