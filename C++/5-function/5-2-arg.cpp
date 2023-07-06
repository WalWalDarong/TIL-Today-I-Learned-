#include <iostream>

using namespace std;

void helloCpp(int, int);

int main() {
  //매개변수 parameter: 인자가 들어갈 자리 
  //전달 인자 argument: 실제 전달 값
  
  int times1;
  int times2;

  cout << "정수를 입력하십시오.\n";
  cin >> times1;
  cout << "정수를 한번 더 입력하시오.\n";
  cin >> times2;
  helloCpp(times1, times2);

  return 0;
}

void helloCpp(int n, int m) {
  for(int i = 0; i < n; i++)
    cout << "Hello, C++!\n";

  for(int i = 0; i < m; i++)
    cout << "C++!\n";
}