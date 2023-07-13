#include <bits/stdc++.h>
using namespace std;

int main(){
  /*
  - 얕은 복사: 메모리 주소값을 복사한 것이라 복사한 배열을 수정하면 원본 배열이 수정되는 방법
  - 깊은 복사: 새로운 메모리 공간을 확보해 복사하여, 복사한 배열을 수정하면 원본 배열은 수정되지 않는 복사 방법
  
  <깊은 복사 방법>
  memcpy(), copy()
  */

  //memcpy(): Array끼리 복사, 어떤 변수의 메모리에 있는 값들을 다른 변수의 "특정 메모리값"으로 복사
  //void * memcpy(void * destination, const void * source, size_t num);
  //vector에서는 깊은 복사 안됨, is_trivial로 확인 가능 > vector는 is_trivial<vector<int>> = false

  int v[3] = {1,2,3};
  int ret[3];

  memcpy(ret, v, sizeof(v));
  cout << ret[1] << "\n"; //2

  ret[1] = 100;

  cout << ret[1] << "\n"; //100
  cout << v[1] << "\n"; //2

  //copy(): Array, vector 모두 사용
  //copy(InputIterator first, InputIterator last, OutputIterator result);
  //copy(v.begin(), v.end(), ret.begin());
  vector<int> v2 {1,2,3};
  vector<int> ret2(3);
  //둘의 크기 맞추는 것 중요

  copy(v2.begin(), v2.end(), ret2.begin());
  cout << ret2[1] << '\n'; //2

  ret2[1] = 100;

  cout << ret2[1] <<'\n'; //100
  cout << v2[1] << '\n'; //2

  //copy() array 버전
  const int n = 3;
  int v3[n] = {1,2,3};
  int ret3[n];

  copy(v3, v3 + n, ret3);
  cout << ret3[1] << '\n'; //2
  ret3[1] = 100;
  cout << ret3[1] << '\n'; //100
  cout << v3[1] << '\n'; //2

  return 0;
}