#include <bits/stdc++.h>
//#define <이름> <값>
#define PI 3.14159
#define loop(x, n) for(int x = 0; x < n; x++)

using namespace std;
//typedef <타입> <별칭>
typedef int i;


string a, c;
int main(){
  cout << 1 << "\n"; //1

  //입력
  //cin: 개행문자(띄어쓰기, 엔터)가 나오면 입력 종료
  cin >> a;
  cout << a << "\n";

  cin >> a >> c; //두 개의 문자열 입력
  cout << a << "\n";
  cout << c << "\n";

  //scanf: 첫번째 매개변수로 받는 형식 지정
  /*
  %d: int
  %lf: double
  %c: char
  %s: string
  %ld: long long
  */

  //getline: 개행문자까지 한 번에 입력 받음
  /*
  cin으로 T개의 getline을 받을지를 설정하고 T개 만큼 getline의 입력이 들어오는 상황
  > 특정 문자열을 기반으로 버퍼플래시를 하고 받아야 함
  >cin으로 입력 받을 때 개행문자 직전 까지 입력 받게 되고, 이 때문에 중간에 위치한 버퍼에 \n이 남아있게 된다.
  이를 없애주기 위해 getline(cin, bufferflush)를 해주어야 한다.
  */
  //이해 안됨
  int T;
  string s;
  string bufferflush;
  cin >> T;
  getline(cin, bufferflush);
  for(int i = 0; i < T; i++){
    getline(cin, s);
    cout << s << "\n";
  }

  i b = 1;
  cout << b << "\n"; //1

  cout << PI << "\n"; //3.14159

  int sum = 0;
  loop(i, 10) {
    sum += i;
  }

  cout << sum << "\n"; //45

  //cout 실수 자릿수: cout.precision(자릿수 + 1);
  //인자: 반올림할 자릿수 입력
  double d = 1.23456789;

  cout.precision(7);
  cout << d << "\n"; //1.234568

  //printf: 형식 지정 출력

  printf("홍철 %d : 지수 %d \n", sum, b); //홍철 45 : 지수 1

  int ii = 12;
  int iii = 2;

  printf("%6lf\n", d); //1.234568
  printf("%02d\n", ii); //12
  printf("%03d\n", iii); //002

  //printf로 string 출력 시 string.c_str() 메서드 사용해주어야 함. 포인터인 char* 타입으로 바꿔줘야 해서
  //그래서 string 출력은 cout이 좋음

  string str = "어벤져스";

  printf("아이엠어 아이언맨: %s\n", str.c_str()); //아이엠어 아이언맨: 어벤져스

  return 0;
}