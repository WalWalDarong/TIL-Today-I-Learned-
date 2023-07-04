#include <iostream>

using namespace std;

int main(){
  /*
  C++의 장점, 복합데이터형
  기본 정수형과 부동소수점형의 조합
  사용자 정의대로 새로운 데이터형 만들 수 있음
  */

  /*
  배열(array): 같은 데이터형의 집합
  typeName arrayName[arraySize];
  */

  short month[12] = { 1, 2, 3 }; //초기화

  cout << month[0] << endl; //1
  cout << month[1] << endl; //2
  cout << month[2] << endl; //3
  cout << month[3] << endl; //0

  /*
  1. 배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언한다.
  2. 초기화를 선언 이후 나중에 할 수 없다.
  3. 배열을 다른 배열에 통쨰로 대입할 수 없다.
  4. 초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
  5. 배열을 부분적으로 초기화하면 나머지 원소들은 모두 0으로 설정한다.
  6. 명시적으로 첫 번째 원소만 0으로 초기화하면, 나머지 원소들은 모두 0으로 초기화된다.
  7. 배열을 초기화할 때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 원소 개수를 저장한다.  
  */

  //문자열
  char a[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
  char b[] = "Hello";

  cout << a << endl;
  cout << b << endl;

  return 0;

}