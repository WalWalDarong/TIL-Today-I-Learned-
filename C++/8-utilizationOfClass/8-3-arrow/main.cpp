#include <iostream>
#include "time.h"

int main() {
  //<<연산자(string 추출 연산자) 오버로딩
  Time t1(3, 45);
  //t1.show();
  
  //friend로 오버로딩 할 수 있음
  cout << t1;
  
  return 0;
}