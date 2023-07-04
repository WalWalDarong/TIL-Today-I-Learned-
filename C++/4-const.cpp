#include <iostream>

using namespace std;

int main() {
  //원의 넓이를 구하는 프로그램
  //반지름 * 반지름 * 파이

  const float PIE = 3.1415926535;
  int r = 3;
  float s = r * r * PIE;

  /*
  <상수>
  1. 바뀔 필요가 없는 수
  2. 바뀌면 안 되는 수
  3. 선언과 대입이 동시에 일어나는 초기화의 방식만 가능함
  */

  cout << s << endl;

  //데이터형 변환
  /*
  1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
  2. 수식에 데이터형을 혼합하여 사용했을 때
  3. 함수에 매개변수를 전달할 때
  */

  int a = 3.141592;
  cout << a << endl; //소수점은 무시됨

  //강제적으로 데이터형 변환
  //typeName(a) (typeName)a
  char ch = 'M';

  cout << (int)ch << "  " << int(ch) << endl; //77 77

  //C++
  //static_cast<typeName>
  cout << static_cast<int>(ch) << endl; //77

  return 0;
}