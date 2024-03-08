#include <iostream>
#include <climits> //라이브러리
using namespace std;

int main(){  
  
  /*
  <정수형>
  소수부가 없는 수
  음의 정수, 0, 양의 정수
  short, int, long, long long
  >표현할 수 있는 수의 크기가 다름
  */

  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  //short: -32768 ~ 32767

  cout << "int는 " << sizeof n_int << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_int << " 이다." << endl;
  
  cout << "short은 " << sizeof n_short << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_short << " 이다." << endl;
  
  cout << "long은 " << sizeof n_long << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_long << " 이다." << endl;
  
  cout << "long long은 " << sizeof n_llong << "바이트이다." << endl;
  cout << "이 바이트의 최대값은 " << n_llong << " 이다." << endl;

  //unsigned 지정하면 음의 값 대신 양의 값으로 범위 바꿀 수 있음
  
  unsigned short b = -1;
  cout << b << endl;

  //실수형: 소수부가 있는 수

  float a = 3.14;
  int c = 3.14;

  cout << a << " " << c << endl;

  return 0;
}