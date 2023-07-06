#include <iostream>
#include "time.h"

int main() {
  //Time class
  Time day1(1, 40);
  Time day2(2, 30);

  day1.show();
  day2.show();

  Time total;
  total = day1.operator+(day2);

  Time total2;
  total2 = day1 + day2;

  total.show();
  total2.show();

  return 0;
}