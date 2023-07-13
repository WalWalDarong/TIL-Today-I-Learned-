#include <bits/stdc++.h>
using namespace std;

vector<int> v;
int main() {
  
  for(int i = 1; i <= 5; i++) v.push_back(i);
  for(int i = 0; i < 5; i++){
    cout << i << "번째 요소: " << *(v.begin() + i) << '\n';
    cout << &*(v.begin() + i) << '\n';
  }

  for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << ' ';
  }

  //vector<int>::iterator 대신 auto

  auto it = v.begin();
  advance(it, 3); //advance(iterator, cnt): iterator를 cnt까지 증가시킨다. 
  cout << '\n';
  cout << *it << '\n';

  //cout << v.begin() << '\n'; 에러: 주소를 바로 반환할 수는 없음, &*사용해야

  /*
  begin(): 시작 위치
  end(): 끝 다음 위치
  */

  /*
  0번째 요소: 1
  0x13b606ac0
  1번째 요소: 2
  0x13b606ac4
  2번째 요소: 3
  0x13b606ac8
  3번째 요소: 4
  0x13b606acc
  4번째 요소: 5
  0x13b606ad0
  1 2 3 4 5 
  4
  */

  return 0;
}