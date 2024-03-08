#include <iostream>

using namespace std;

void print(char, int);
void print(int, int);
void print(char);

int sum(int, int);
float sum(float, float);

int main() {
  //함수의 다형
  //다형: 다양한 형태를 지닌
  //함수의 오버로딩: 여러 개의 함수를 같은 이름으로 연결한다

  print('a', 3);
  print(3, 2);
  print('a');

  /*
  과용해서는 안되며, 같은 작업 수행 시 사용하는 것이 바람직
  디폴트 매개변수 활용 가능
  */

  /*
  <오버로딩 사용 불가>
  1. 함수의 리턴형만 다를 경우
  2. 함수를 사용할 때, 두 개 이상의 함수에 대응되는 경우
  */

  cout << "두 정수를 입력하시오. \n";
  int a, b;
  cin >> a >> b;
  cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n";
  cout << "두 실수를 입력하시오.\n";
  float c, d;
  cin >> c >> d;
  cout << "두 실수의 합은 " << sum(c, d) << "입니다. \n";

  return 0;
}

int sum(int a, int b) {
  return a + b;
}

float sum(float a, float b) {
  return a + b;
}

void print(char a, int b) {
  cout << a << b <<endl;
}

void print(int a, int b) {
  cout << a << b <<endl;
}

void print(char a) {
  cout << a << endl;
}