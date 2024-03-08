#include <iostream>
#include "time.h"

int main() {
  //C++ friend 함수
  //이항 연산자: 두 개의 피연산자를 요구하는 연산자
  //operator*

  Time t1(1, 20);
  Time t2; 

  //순서 바꿔서도 가능하도록
  t2  = 3 * t1;
  t2 = t1 * 3;
  // t2 = operator*(3, t1);
  t2.show();
  return 0;
}

//인터페이스
/*
특정 기능을 구현할 것을 약속한 추상 형식
좁은 의미: 순수 가상 함수만을 갖는 클래스
넓은 의미: 앞으로 프로그램을 어떻게 짤 것인가에 대한 약속
*/