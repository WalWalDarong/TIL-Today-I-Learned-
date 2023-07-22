#include <bits/stdc++.h>
using namespace std;
const int n = 3; //배열의 길이 정의할 때는 const로 작성
bool a[n][n], vst[n][n];
const int dy[4] = { -1, 0, 1, 0};
const int dx[4] = { 0, 1, 0, -1}; 

void go(int y, int x){
  vst[y][x] = 1;
  cout << y << " : " << x <<'\n';

  for(int i = 0; i < 4; i++){
    int ny = y + dy[i];
    int nx = x + dx[i];
    if(ny <= n && ny > -1 && nx <= n && nx > -1 && vst[ny][nx] == 0 && a[ny][nx] == 1) go(ny, nx);
    //조건 나눠서 !조건 continue로 만들 수 있음
    //범위 내일 때만 동작하도록 하는 조건 매우 중요함: overflow, underflow 방지
  }
  return;
}


int main(){
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cin >> a[i][j];
    }
  }

  // for(int i = 0; i < 3; i++){
  //   for(int j = 0; j < 3; j++){
  //     cout << a[i][j];
  //   }
  // }

  go(0, 0);

  return 0;
}