#include <iostream>
#include "time.h"

using namespace std;

int main() {
  /*
  1. 기존의 클래스에 새로운 기능을 추가할 수 있다.
  2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있다.
  3. 클래스 메서드가 동작하는 방식을 변경할 수 있다.
  */

  // NewTime temp1(); //왜 안되지...
  NewTime temp2(3, 40, 2);

  temp2.print();

  return 0;
}