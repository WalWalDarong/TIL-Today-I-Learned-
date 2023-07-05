#include <iostream>

using namespace std;

int main(){
  //반복문이란
  for(int i = 0; i < 5; i++){
    //code
    cout << i << "번째입니다."<<endl;
    //여기에 i++ 도 가능
  }

  /*
  1. 반복문에 사용할 카운터(int i)의 값을 초기화
  2. 반복문을 진행할 것인지 '조건 검사'
  3. 반복문 몸체를 수행
  4. 카운터 값 변화
  */

  //++: 증가 연산자, --: 감소 연산자
  int a = 10;
  int b = 10;

  cout << "a는 " << a << ", b는 " << b << endl; //10, 10
  cout << "a++는 " << a++ << endl; //10, 변수 값을 판단하고 증가시킴, a에는 11이 저장되어 있음
  cout << "++b는 " << ++b << endl; //11, 변수를 증가시키고 판단함
  cout << "a는 " << a << ", b는 " << b << endl; //11, 11

  //관계 표현식 6가지
  /*
  <
  <=
  >
  >=
  ==
  !=
  */

  return 0;
}