#include <bits/stdc++.h>
using namespace std;

//값에 의한 호출
int add(int a, int b){
  a += 10;
  cout << a << '\n';
  return a + b;
}

vector<int> v(3, 0);
void go(vector<int> v){
  v[1] = 100;
}

//참조에 의한 호출
int add2(int &a, int b){
  a += 10;
  cout << a << '\n';
  return a + b;
}

void go2(vector<int> &v){
  v[1] = 100;
}

int main(){
  /*
  참조에 의한 호출로 넘겨야 할 때:
  double, int 등 primitive한 타입은 값에 의한 호출로 넘기는 게 더 빠름
  but reference한 타입, 복잡한 struct나 요소가 많은 배열은 참조로 넘기는 게 좋다
  (복사에 메모리가 많이 드니까)
  */

  /*
  primitive: byte, short, int, long, float, double, boolean, char
  reference: 인스턴스화 가능한 모든 클래스 및 배열, String, struct, class, int[], string[]
  */
 
  int a = 1;
  int b = 2;
  add(a, b); //11
  cout << a << '\n'; //1
  
  add2(a, b); //11
  cout << a << '\n'; //11

  go(v);
  
  for(int i : v) cout << i << '\n';
  /*
  0
  0
  0
  */

  go2(v);
  for(int i : v) cout << i << '\n';
  /*
  0
  100
  0
  */

  return 0;
}