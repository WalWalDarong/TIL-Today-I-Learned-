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
  
  //2. double
  double rett = b(); //double
  cout << rett << "\n";

  //함수 선언, 정의 따로 하는 게 정석이지만, 알고리즘 문제 풀이는 시간 싸움이므로 위에 한번에 선언 & 정의하기
  //3.char
  char ch = c();
  cout << ch << "\n";

  //4. string
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

  return 0;
  }