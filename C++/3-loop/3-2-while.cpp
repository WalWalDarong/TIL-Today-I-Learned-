#include <iostream>

using namespace std;

int main() {
  //while문, do while문
  //조건 검사식만 떼어내어 while() 안에 넣기, 카운터는 미리 정의

  string str = "Panda";

  int i = 0;
  while (str[i] != '\0') {
    //code
    cout << str[i] << endl;
    i++;
  }

  bool a = true;
  bool b = false;

  while (a) {
    cout << "hello\n";
    a = b;
  }

  //for문과 while문의 가장 큰 차이점: 카운터의 위치

  //do while: 실행 후 조건을 검사함
  //최소 1회 실행
  bool j = false;
  do {
    cout << "do while문입니다.\n";
  } while (j);

  return 0;
}