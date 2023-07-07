#include <iostream>
#include "time.h"

int main() {
  Time temp1(2, 30);
  NewTime temp2(3, 40, 2);

  temp1.show();
  temp2.show();
  
  return 0;
}