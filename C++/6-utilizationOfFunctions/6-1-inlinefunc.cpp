#include <iostream>

using namespace std;

inline float square(float x) { return x * x;}

int main() {
  //인라인 함수
  /*
  일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
  인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
  컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체
  프로그램의 실행 속도 향상을 위해 지원되는 기능
  함수가 복잡해질 수록 효과 미비 > 프로그래머의 판단에 따라 결정
  */

  int a = 5;
  cout << "한 변의 길이가 " << a << "인 정사각형의 넓이는?" << endl;
  float b = square(a);
  cout << b << endl;


  //디폴트 매개변수
  /*매개 변수 생략 시 사용되는 default 매개 변수
  맨 위에 함수 적을 원형 적을 때 자바스크립트랑 똑같이 "=" 사용
  규칙: 오른쪽부터 왼쪽으로 디폴트를 설정해야 함
  */

  return 0;
}