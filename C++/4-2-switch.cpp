#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 30;
int main(){
  //switch 구문
  int a;
  cin >> a;
  switch(a)
  {
    case 1:
      cout << "입력하신 값은 1입니다. \n";
      break;

    case 2:
      cout << "입력하신 값은 2입니다. \n";
      break;
    
    case 3:
      cout << "입력하신 값은 3입니다. \n";
      break;
    
    case 4:
      cout << "입력하신 값은 4입니다. \n";
      break;
    
    default: 
      cout << "입력하신 값은 1,2,3,4 이외의 다른 값입니다.\n";
      break;
  }

  cout << "switch 구문이 끝났습니다. \n";

  //break: 모든 종류의 loop에서 사용 가능, 종료시킴
  //없으면 계속 진행됨
  int i = 0;
  while(true){
    cout << "i is " << i << endl;
    if(i > 10) break;
    i++;
  }

  cout << "while is over. \n";

  //continue: 뒤에 나오는 모든 내용이 무시되고 반복이 새로 시작됨, 반복문에서만 사용됨

  cout << "문장을 입력하십시오.\n";

  char line[SIZE];
  cin.get(line, SIZE);
  //!!error!! cin이 실행되지 않음

  cout << "입력하신 문장은 \"";
  int spaces = 0;

  for(int i = 0; line[i] != '\0'; i++){
    cout << line[i];
    if(line[i] == ' ') continue;
    spaces++;
  }

  cout << "\" 입니다.\n";
  cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다. \n";
  cout << "for문이 끝났습니다.\n";

  return 0;
}