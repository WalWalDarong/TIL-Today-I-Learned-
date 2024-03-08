#include "stock.h"

int main() {
  //추상화와 클래스
  //데이터형: 데이터형을 대상으로 어떠한 연산을 수행할 수 있는가?

  int a = 3;
  int b = 4;
  //4byte

  //클래스: 추상화를 통해 사용자 정의 데이터형으로 변환해주는 수단
  //추상화: 어떠한 객체를 사실적으로 표현하는 것이 아니라, 공통된 특징을 간결한 방식으로 이해하기 쉽게 표현하는 것
  
  /*
  1. 클래스 선언
  2. 클래스 메서드 정의
  */

  Stock temp = Stock("Panda", 100, 1000);
  // Stock temp("Panda", 100, 1000);
  //temp.acquire("Panda", 100, 1000);
  temp.show();
  temp.buy(10, 1200);
  temp.show();
  temp.sell(5, 800);
  temp.show();

  Stock s1("A", 10, 1000);
  Stock s2("B", 20, 1200);
  
  cout << "A와 B 중 share_val이 큰 객체는\n";
  s1.topval(s2).show();
  
  Stock s[4] = {
    Stock("AA", 10, 1000),
    Stock("BB", 20, 1200),
    Stock("CC", 20, 1300),
    Stock("DD", 20, 1400),
  };

  s[0].show();

  Stock *first = &s[0];
  for(int i = 0; i <4; i ++) {
    first = &first->topval(s[i]);
  }
  
  first->show();

  return 0;
}