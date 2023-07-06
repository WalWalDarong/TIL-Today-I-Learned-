#include <iostream>

using namespace std;

int main(){
  //분기 구문: if구문
  if(false){
    cout << "조건이 ";
    cout << "참입니다. " << endl;
  } else if(false) {
    cout << "조건이 거짓입니다. " << endl;
  } else {
    cout << "조건이 거짓입니다. #2 " << endl;
  }

  cout << "프로그램이 종료되었습니다.\n";

  //논리 표현식
  //논리합 ||, 논리곱 &&, 논리부정 ! 연산자

  cout << "당신의 나이를 입력하십시오. ";
  int age;
  cin >> age;

  if(age < 0 || age > 100) {
    cout << "거짓말 하시면 안됩니다. \n";
  } else if ( 20 <= age && age <= 29) {
    cout << "당신은 20대이군요?\n";
  } else {
    cout << "당신의 나이를 잘 모르겠습니다.\n";
  }
  


  return 0;
}