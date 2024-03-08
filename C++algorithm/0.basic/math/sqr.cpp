#include <bits/stdc++.h>
using namespace std;

int main(){
  //pow(밑수, 승수)
  /*
  pow()는 double형 인자를 2개 받고, 기본적으로 double을 반환한다.
  int형으로 사용하려면 앞에 (int)를 붙여서 변환해줘야 한다.
  pow(double base, double exponent);
  */
  int n = 4;
  int pow_2 = (int)pow(2, n);
  cout << pow_2 << '\n'; //16

  //제곱근 구하기
  //sqrt(n)
  /*
  기본적으로 double형 매개변수 받아서 double형으로 리턴한다.
  pow()와 마찬가지로 int변환 필요
  sqrt(double num);
  */
  int nn = 16;
  int ret = (int)sqrt(nn);
  cout << ret << '\n'; //4

  return 0;
}