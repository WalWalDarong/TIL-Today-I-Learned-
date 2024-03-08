#include <bits/stdc++.h>
using namespace std;
int a = 4;
double c = 2.22;
int main() {
  //주소: &<변수>
  //pointer: <타입> *<변수명> = <해당 타입의 변수의 주소>
  int *b = &a;
  double *d = &c;

  cout << &a << '\n'; //0x104078000
  cout << b << '\n'; //0x104078000
  cout << sizeof(b) << '\n'; //8

  cout << &c << '\n'; //0x104078008
  cout << d << '\n'; //0x104078008
  cout << sizeof(d) << '\n'; //8

  //포인터 size는 운영체제마다 다름, 자료형 크기와는 관계 없음
  //32bit > 4 byte, 64bit 운영체제 > 8 byte

  cout << *d << '\n'; //2.22
  /*
  * 역할 3가지
  1. 곱셈
  2. 포인터
  3. 역참조 연산자
  */

  //배열의 이름 = 주소값

  /*
  <Array to Pointer Decay>
  int a[N];
  int *c = a;
  array 크기 정보 사라지고, a의 첫번째 주소가 이름에 바인딩 된다.
  vector는 안되고, 정적 배열만 가능
  */

  int arr[3] = { 1, 2, 3};

  int *c = arr;
  cout << c << '\n'; //0x16baaf018
  cout << &arr[0] << '\n'; //0x16baaf018
  cout << c + 1 << '\n'; //0x16baaf01c

  return 0;
}