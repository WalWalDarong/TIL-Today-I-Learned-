#include <bits/stdc++.h>
using namespace std;

int main() {
  //1차원 배열 회전
  //rotate(): 회전할 구간인 [first, last)를 집어넣고 몇칸 정도 회전할지 집어넣는다.
  //ForwardIterator(ForwardIterator first, ForwardIterator middle, ForwardIterator last);

  //반시계방향
  //한칸씩 반시계 방향으로 왼쪽 이동
  vector<int> v = {1, 2, 3, 4, 5, 6};
  rotate(v.begin(), v.begin() + 1, v.end());
  for(int i : v) cout << i << ' '; //2 3 4 5 6 1

  cout << "\n------------------\n";

  //2칸 이동
  rotate(v.begin(), v.begin()+2, v.end());
  for(int i : v) cout << i << ' '; //4 5 6 1 2 3

  cout << "\n------------------\n";

  //일부만 회전 (마지막은 포함되지 않음)
  //index 1부터 한칸씩 왼쪽으로 4개만 회전
  rotate(v.begin() + 1, v.begin() + 2, v.begin() + 5);
  for(int i : v) cout << i << ' '; //4 6 1 2 5 3

  cout << "\n------------------\n";

  //시계방향
  /*
  rbegin(), rend() 활용
  rbegin(): 배열의 마지막 index pointer
  rend(): 배열의 시작 직전 위치  
  */
  rotate(v.rbegin(), v.rbegin() + 1, v.rend());
  for(int i : v) cout << i << ' '; //3 4 6 1 2 5
  
  cout << "\n------------------\n";

  //메서드 없이 직접 구현
  //temp를 기반으로 코드 구축
  int i = 1;
  int temp = v[i];
  v[i] = v[i + 1];
  v[i + 1] = v[i + 2];
  v[i + 2] = v[i + 3];
  v[i + 3] = temp;

  for(int i : v) cout << i << ' '; //3 6 1 2 4 5 

  return 0;
}