#include <bits/stdc++.h>
using namespace std;

const int mxy = 3;
const int mxx = 4;

int a[mxy][mxx];

int main() {
  //정적 배열
  //vector와 달리 array는 메서드가 없다.

  //2차원 배열
  for(int i = 0; i < mxy; i++){
    for(int j = 0; j < mxx; j++){
      a[i][j] = (i + j);
    }
  }
  //첫번째 차원 > 그 다음 차원 순으로 탐색하는 것이 캐시관련 효율이 좋다.

  for(int i = 0; i < mxy; i++){
    for(int j = 0; j < mxx; j++){
      cout << a[i][j] << ' ';
    }
    cout << '\n';
  }

  /*
  0 1 2 3 
  1 2 3 4
  2 3 4 5
  */

  return 0;
}