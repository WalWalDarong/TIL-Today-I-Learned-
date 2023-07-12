#include<bits/stdc++.h>

using namespace std;

int ret = 1;
void a() {
  ret = 2;
  cout << ret << "\n";
  return;
}

double b() {
  return 1.23333;
}

char c() {
  char a = 'a';
  return a;
}

vector<string> split(string input, string delimeter){
  vector<string> ret;
  long long pos;
  string token;

  while ((pos = input.find(delimeter)) != string::npos){
    token = input.substr(0, pos);
    ret.push_back(token);
    input.erase(0, pos + delimeter.length());
  }

  ret.push_back(input);

  return ret;
}

int main() {
  //type의 종류: void, char, string, bool, int, long long, double, usigned long long

  //1. void
  a(); //void
  
  double rett = b(); //double
  cout << rett << "\n";

  //함수 선언, 정의 따로 하는 게 정석이지만, 알고리즘 문제 풀이는 시간 싸움이므로 위에 한번에 선언 & 정의하기
  //2.char
  char ch = c();
  cout << ch << "\n";

  //3. string
  string s = "나는야";

  cout << s[0] << s[1] << s[2] << "\n"; //한글은 글자당 3바이트라서 이 방식이 안 먹힘, 영어만 가능
  cout << s << "\n";

  //string 메서드 활용
  string str = "love is";

  str += " pain!";

  str.pop_back();

  cout << str << " : " << str.size() << "\n"; //love is pain : 12

  cout << char(* str.begin()) << "\n"; //l

  cout << char(* (str.end() - 1)) << "\n"; //n

  //string& insert (size_t pos, const string& str);
  str.insert(0, "test "); //insert(위치, 문자열)

  cout << str << " : " << str.size() << "\n"; //test love is pain : 17

  //string& erase (size_t pos = 0, size_t len = npos);
  str.erase(0, 5); //erase(위치, 크기)

  cout << str << " : " << str.size() << "\n"; //love is pain : 12

  //size_t find (const string& str, size_t pos = 0);
  auto it = str.find("love"); //find(문자열) 위치 반환, 못 찾을 경우 string::npos 반환

  //string::npos는 size_t 타입의 최대값
  if (it != string::npos){
    cout << "포함되어 있다." << "\n"; //포함되어 있다.
  }

  cout << it << "\n"; //0

  cout << string::npos << "\n"; //18446744073709551615

  //string substr (size_t pos = 0; size_t len = npos) const;
  cout << str.substr(5, 2) << "\n"; //is //substr(위치, 크기)

  //문자에 값을 더하거나 빼면 아스키코드(0~127)에서 그 숫자에 대응하는 값이 나옴
  //A: 65, a: 97

  cout << (int)'a' << "\n"; //97

  //STL - reverse() 메서드
  //void reverse (BidirectionalIterator first, BidirectionalIterator last);
  //void로 아무것도 반환하지 않으며 원본 문자열을 바꾼다.

  reverse(str.begin(), str.end());
  cout << str << "\n"; //niap si evol

  reverse(str.begin(), str.end());
  cout << str << "\n"; //love is pain

  reverse(str.begin() + 3, str.end());
  cout << str << "\n"; //lovniap si e

  //split()
  //c++은 split()을 제공하지 않아서 직접 만들어야 함
  string stnc = "hello this is walwal world, Welcome!", dlmt = " ";

  vector<string> vt = split(stnc, dlmt);

  for(string e : vt) cout << e << "\n";
  //for(int i = 0; i < vt.size(); i++)

  //문자열 숫자를 int로 변경
  //문자열 숫자가 아닌, 그냥 문자열이면 0 반환
  string sn = "123";
  string sn2 = "0";
  string sn3 = "장다희";
  
  cout << atoi(sn.c_str()) << "\n"; //123
  cout << atoi(sn2.c_str()) << "\n"; //0
  cout << atoi(sn3.c_str()) << "\n"; //0


  //4. bool (1 byte)
  //숫자: 0 외에는 모두 true
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  int boo = -1;
  cout << bool(boo) << "\n"; //1
  boo = 0;
  cout << bool(boo) << "\n"; //0
  boo = 3;
  cout << bool(boo) << "\n"; //1

  //5. int (4 bytes)
  //20억 넘으면 long long

  /*
  int 최대값 아래처럼 지정해놓으면 편리함
  const int INF = 987654321;
  const int INF2 = 1e9;
  오버플로 방지
  */

  //int끼리 계산한 값의 소수점은 버려짐

  //6. long long (8 bytes integer)
  /*
  long long 최대값 선언
  typedef long long ll;
  ll INF = 1e18;
  */

  //7. double (8 bytes float)
  //소수점 아래 15자리 (float은 4바이트, 소수점 아래 7자리)
  //그냥 float 말고 double 써라

  //8. unsigned long long: 0부터 양수만, 최대값이 2배

  //pair와 tuple
  /*
  템플릿 클래스 (타입이나 자료구조는 아님)
  pair: first, second 멤버 변수를 가지는 클래스
  tuple: 세 가지 이상의 값 담을 때 사용
  */

  pair<int, int> pi;
  tuple<int, int, int> tl;

  int k, m, n;
  pi = { 1, 2 }; //make_pair(1, 2)
  tl = make_tuple(1, 2, 3);

  tie(k, m) = pi; // k = pi.first; m = pi.second;
  cout << k << "," << m << "\n"; //1,2

  tie(k, m, n) = tl; //k = get<0>(tl); m = get<1>(tl); n = get<2>(tl);
  cout << k << "," << m << "," << n << "\n"; //1,2,3

  //9. auto: 복잡하고 긴 타입 대신

  vector<pair<int, int>> vct;

  for(int i = 1; i <= 5; i++){
    vct.push_back({i, i});
  }

  for(auto it : vct){ //for(pair<int, int> it : v)
  cout << it.first << " : " << it.second << '\n';
  }

  //타입 변환
  //(바꿀 타입) 기존 변수
  /*
  이형 연산 시 형변환 우선순위
  ● long double (highest)
  ● double
  ● float
  ● unsigned long long
  ● long long
  ● unsigned long
  ● long
  ● unsigned int
  ● int (lowest)
  */
  
  //!!!!vector.size()는 usigned int라서 양수만 나오니까 주의, 형변환 필수!!!
  vector<int> aaa = {1, 2, 3};
  cout << aaa.size() - 10 << '\n'; //18446744073709551609
  cout << (int)aaa.size() - 10 << '\n'; //-7

  /*
  연산 순서 주의
  int a = (int) p * 100 // 1
  int a = (int) 100 * p // 2
  
  2는 변환 안됨
  */

  char chr = 'a';
  cout << (int)chr << '\n'; //97
  cout << (int)chr - 97 << "\n"; //0
  cout << (int)chr - 'a' << "\n"; //0

  return 0;
  }