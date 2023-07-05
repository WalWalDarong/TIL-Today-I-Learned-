#include <iostream>

using namespace std;

int main(){

  // + - * / %
  //%는 부동 소수점 (실수) 사용할 수 없음

  int a = 3 + 2;

  cout << a << endl;

  //C++가 복잡한 산술 연산을 수행할 수 있나? Yes

  int b = 10;
  int c = 3;
  int d = 5;

  int multiple = b + c * d;

  //b 나누기 c를 먼저 실행 후 d를 곱함
  int devide = b / c * d;

  cout << multiple << endl; //25
  cout << devide << endl; //15 나눗셈 연산자는 둘 다 정수면 정수 몫만 나옴, 하나라도 실수면 결과는 실수가 됨

  float e = 9.0;
  int f = 5;

  cout << e/f << endl; //1.8

  //auto
  //초기화할 때 auto로 데이터형 명시하면 자동으로 데이터형 결정됨

  auto n = 100; //int
  auto x = 1.5; //float
  auto y = 1.3e12L; //long long

  return 0;
}