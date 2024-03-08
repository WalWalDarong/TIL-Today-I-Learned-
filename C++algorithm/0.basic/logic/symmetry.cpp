#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v = {
  {1,2,3},
  {4,5,6},
  {7,8,9},
};
int b[3][3];

int main() {
  //2차원 배열 대각선 대칭
  //같은 크기의 배열에 j, i로 담아라
  for(int i = 0; i < v.size(); i++){
    for(int j = 0; j < v[0].size(); j++){
      b[i][j] = v[j][i];
    }
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      cout << b[i][j] << " ";
    }
    cout << '\n';
  }
  /*
  1 4 7 
  2 5 8 
  3 6 9
  */

  return 0;
}