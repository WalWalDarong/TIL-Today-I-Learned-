#include <iostream>

using namespace std;

int main(){
  //char: 작은 문자형, 작은 따옴표 (큰 따옴표 안 됨)

  int a = 77;
  char b = a;
  char c = 'c';
  char d[] = { 'a', 'b', 'c', 'd', '\0'};
  //문자열의 경우 null 문자가 있어야 함. '\0'
  //"" >> 명시적으로 null 문자가 포함되어 있다. => string

  //char = ASCII code에서 한 단어 e.g., 77 = M
  //한글은 ASCII로 지원 안됨, wput, string 형 등을 사용해야 함

  cout << d << endl;
  cout << c << endl;
  
  //bool: 0 혹은 1 (false 혹은 true)

  bool aa = 0;
  bool bb = 1;
  bool cc = 2;
  bool dd = 10;

  //bool 타입에 0 이외의 모든 수는 1이 된다.

  cout << aa << " " << bb << " " << cc << " " << dd << endl;

  return 0;
}