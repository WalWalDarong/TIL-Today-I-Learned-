#include <iostream>

using namespace std;

int main() {
  //공용체(union)
  //서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

  union MyUnion
  {
    int intVal;
    long longVal;
    float floatVal;
  };

  MyUnion test;

  test.intVal = 3;
  cout << test.intVal << endl; //3

  test.longVal = 33;
  cout << test.intVal << endl; //33
  cout << test.longVal << endl; //33

  test.floatVal = 3.3;
  cout << test.intVal << endl; //이상한 수
  cout << test.longVal << endl; //이상한 수
  cout << test.floatVal << endl; //3.3

  //이전 데이터값이 소실됨
  //동시에 사용할 수 없어, 메모리는 절약됨

  //열거체(enum)
  //기호 상수를 만드는 것에 대한 또 다른 방법

  //아무 것도 지정하지 않으면 0부터 1씩 증가하는 정수
  //초기화할 때 반드시 정수여야 함
  enum spectrum { red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet };

  /*
  1. spectrum을 새로운 데이터형 이름으로 만든다.
  2. red, orange, yellow 등을 0에서부터 7까지 정수 값을 각각 나타내는 기호 상수로 만든다.
  */

  spectrum a = orange; //a 열거체에 orange 열거자 대입

  cout << a << endl; //1

  //기호 상수라서 산술 연산을 적용할 수는 없음
  //spectrum a = orange + yellow는 불가능

  //정수형에 대입할 때는 정수형으로 변환될 수 있음

  int b;
  b = blue;
  b = blue + 3;

  cout << b << endl; //9

  return 0;
}