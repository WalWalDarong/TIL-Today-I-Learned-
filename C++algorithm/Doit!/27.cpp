#include <bits/stdc++.h>
using namespace std;
int N, M;
int mp[104][104];
bool v[104][104] = {false};
int dy[4] = { -1, 0, 1, 0};
int dx[4] = { 0, -1, 0, 1};
int dist[104][104];
queue<pair<int, int> > q;
void findRoad(int x, int y){
  pair<int, int> pFirst;
  pFirst.first = x;
  pFirst.second = y;
  //make_pair(x, y);
  q.push(pFirst);
  while(q.size() > 0){
    int x = q.front().first;
    int y = q.front().second;

    if(v[x][y]){
        q.pop();
       return;
    }

      v[x][y] = true;   
      q.pop();
      // if(x == N && y == M){
      //   return;
      // }

      for(int i = 0; i < 4; i++){
          int ny = y + dy[i];
          int nx = x + dx[i];
          if(ny <= 0 || ny > M || nx <= 0 || nx > N) continue;
          if(mp[nx][ny] && !v[nx][ny]){
              dist[nx][ny] = dist[x][y] + 1;
              pair<int, int> next;
              v[nx][ny] = true;
              q.push(make_pair(nx, ny));
          }
      }
    }
};
int main(){
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        string s;
        cin >> s;
        for(int j = 1; j <=M; j++){
          mp[i][j] = s[j] - '0';
        }
    }
    
    dist[1][1] = 1;
    findRoad(1, 1);

    cout << dist[N][M] << '\n';

    return 0;
}