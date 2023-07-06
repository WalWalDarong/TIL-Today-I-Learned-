#include <iostream>

using namespace std;

//class 혹은 typeName
template <class Any>
Any sum(Any, Any);

//template 오버로딩
template <class Any>
Any sum(int, Any);

int main() {
  //함수 템플릿
  //구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
  int a = 3;
  int b = 4;
  //오버로딩 하면 에러남
  //cout << sum(a, b) << endl;

  float c = 3.14;
  float d = 1.592;
  cout << sum(c, d) << endl;

  
  cout << sum(a, c) << endl;
  /*
  error
  >>
  Any sum(int, Any)로 바꿔야 함
  */
  
  return 0;
}

template <class Any>
Any sum(Any a, Any b) {
  return a + b;
}

//template 오버로딩
template <class Any>
Any sum(int a, Any b) {
  return a + b;
}