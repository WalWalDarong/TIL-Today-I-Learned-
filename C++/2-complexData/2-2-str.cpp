#include <iostream>
#include <cstring> //strlen() 함수를 사용하기 위해서

using namespace std;

int main(){
  /*cin 사용자 입력 저장 함수
  공백을 문자열의 끝으로 인식함
  >>공백 포함: cin.getline(변수, 최대 사이즈) 또는 cin.get()
  */

  const int Size = 15;
  char name1[Size];
  char name2[Size] = "C++programming";

  cout <<"안녕하세요, 저는 " << name2;
  cout <<"입니다! 성함이 어떻게 되사니요?\n";
  // cin >> name1;
  cin.getline(name1, Size);
  cout << "음, " << name1 << "씨, 당신의 이름은 ";
  cout << strlen(name1) << "자입니다만\n";
  cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.\n";
  name2[3] = '\0';
  cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
  cout << name2 << endl;
  
  //C++에서 문자열을 다루는 방법 중 하나인 string

  /*
  C스타일로 string 객체를 초기화할 수 있다.
  cin을 사용하여 string 객체에 키보드 입력을 저장할 수 있다.
  cout을 사용하여 string 객체를 디스플레이할 수 있다.
  배열 표기를 사용하여 string 객체에 저장되어 있는 개별적인 문자들에 접근할 수 있다.

  배열을 다른 배열에 통째로 대입할 수 없다.
  >>string에서는 이것이 가능함
  >>char[]와 가장 큰 차이점
  */

  char char1[20];
  char char2[20] = "jaguar";
  string str1;
  string str2 = "panda";
  // char1 = char2; 틀리다.
  str1 = str2; //맞다.

  cout << str1[0] << endl;

  return 0;
}