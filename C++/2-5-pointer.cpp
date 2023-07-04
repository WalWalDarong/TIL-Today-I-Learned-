#include <iostream>

using namespace std;

int main() {

  int val = 3;

  cout << &val << endl;

  //C++: 객체 지향 프로그래밍
  /*
  컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.
  e.g., 배열 생성
  재래적 절차적 프로그래밍: 배열 크기 미리 결정
  객체지향 프로그래밍: 배열 크기 실행 시간에 결정
  */

  //포인터: 사용할 주소에 이름을 붙인다.
  //포인터는 포인터의 이름이 주소를 나타낸다.
  //간접값 연산자, 간접 참조 연산자 *

  int *x; //C style
  int* y; //C++ style
  int* z, f; //z는 포인터 변수, f는 int형 변수

  int a = 6;
  int* b; //위치

  b = &a;

  cout << "a의 값 " << a << endl; //6
  cout << "*b의 값 " << *b << endl; //6

  cout << "a의 주소 " << &a << endl;
  cout << "*b의 주소 " << b << endl;

  *b = *b + 1;
  //위치 값을 연산하는 건 아무 의미 없음

  cout << "이제 a의 값은 " << a << endl; //7

  //new 연산자
  /*
  어떤 데이터형을 원하는지 new 연산자에게 알려주면, 
  new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고 
  그 블록의 주소를 리턴한다.
  */

  int* pointer = new int; //포인터가 데이터의 객체를 지시하고 있다.

  cout << pointer << endl;

  //delete 연산자
  /*
  사용한 메모리를 다시 메모리 풀로 환수
  환수된 메모리는 프로그램의 다른 부분이 다시 사용
  */

  int* ps = new int;
  //메모리 사용
  delete ps;

  //new를 사용한 후에는 반드시 delete를 사용해야 함

  /*
  1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
  2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
  3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
  4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.  
  */

  double* p3 = new double[3]; //double형 데이터 3개를 저장할 수 있는 공간을 대입
  p3[0] = 0.2;                //p3 배열 이름처럼 취급한다.
  p3[1] = 0.5;
  p3[2] = 0.8;

  cout << "p3[1] is " << p3[1] << ".\n"; //0.5

  p3 = p3 + 1; //double형 데이터 공간 한 개, double의 바이트만큼 포인터(주소)를 증가시킨다.

  cout << "Now p3[0] is " << p3[0] << " and "; //0.5
  cout << "p3[1] is " << p3[1] << ".\n"; //0.8

  p3 = p3 - 1; //다시 시작 위치를 지시한다.
  delete[] p3; //배열 메모리를 해제한다.

  const int SIZE = 20;

  char animal[SIZE];
  char* ps2;

  cout << "동물 이름을 입력하시오\n";
  cin >> animal;

  ps2 = new char[strlen(animal) + 1];
  strcpy(ps2, animal); // ps2에 animal 값을 복사하라는 함수

  cout << "입력하신 동물 이름을 복사하였습니다." << endl;
  cout << "입력하신 동물 이름은 " << animal << "이고 주소는 " << (int*)animal << " 압나다." << endl;
  cout << "복사된 동물 이름은 " << ps2 << "이고, 그 주소는 " << (int*)ps <<" 입니다." <<endl;

  //동적 구조체 생성
  //temp* ps = new temp;
  //동적 구조체에 한하여 멤버 연산자는 .이 아닌 ->

  struct MyStruct
  {
    char name[20];
    int age;
  };

  MyStruct* temp = new MyStruct;

  cout << "당신의 이름을 입력하십시오.\n";
  cin >> temp ->name;

  cout << "당신의 나이를 입력하십시오.\n";
  cin >> (*temp).age;

  cout << "안녕하세요!" << temp->name << "씨!\n";
  cout << "당신은 " << temp->age << "살이군요!";

  return 0;
}