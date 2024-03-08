#include <bits/stdc++.h>
using namespace std;
//지도 탐색 map
//4방향 탐색
const int dy[] = { -1, 0, 1, 0 };
const int dx[] = { 0, 1, 0, -1 };
//8방향 탐색이면 배열 요소 8개 짜리로 수정해서, for문도 8까지로 수정

int main(){
  int y = 0, x = 0;
  for(int i = 0; i < 4; i++){
    int ny = y + dy[i];
    int nx = x + dx[i];
    cout << ny << " : " << nx << '\n';
  }
  return 0;
}