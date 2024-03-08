#include <bits/stdc++.h>
using namespace std;
/*
class VS struct
코테에서는 struct만 알아도 충분
둘의 차이: struct는 멤버 변수가 기본적으로 public이며, 상속이 안된다.
class는 기본이 private이며 상속이 가능하다.
*/

//Ralo 구조체 정의하기: int 2개, double 3개
struct Ralo{
  int a, b;
  double c, d, e;
};

void print(Ralo ralo){
  cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " " << ralo.e << '\n';
}

//Ralo struct를 compare 함수를 통해 정렬
bool compareR(Ralo A, Ralo B){
  if(A.a == B.a) return A.b < B.b;
  return A.a < B.a;
}//비교 1순위 a, 2순위 b

//Point 구조체 정의하기
struct Point{
  int y, x; //구조체의 멤버 변수 정의
  Point(int y, int x) : y(y), x(x){} //y, x를 받아 멤버 변수를 생성한다. class의 consturctor 역할
  Point(){y = -1; x = -1;} //초기값 설정
  bool operator < (const Point & a) const {
    if(x == a.x) return y < a.y;
    return x < a.x;
  }
  /*
  비교 연산자 < 오버로딩:
  비교 기준 설정
  1순위 - x, 2순위 - y 오름차순
  비교, 정렬 시 사용
  */
};

//Point 비교 함수
bool cmp(const Point & a, const Point & b){
  return a.x > b.x;
}

//vector에 Point structr 넣어서 정렬하기
vector<Point> v;

//string으로 이루어진 배열 정렬
bool compare(string a, string b){
  if(a.size() == b.size()) return a < b;
  return a.size() < b.size();
}
//숫자 문자열은 ASCII코드 순으로 정렬하니까, 비교할 때 사이즈 확인 로직 넣는 게 중요

int main() {
  //struct: 개발자가 커스텀한 자료구조
  Ralo ralo = { 1, 1, 1, 1, 1 };
  print(ralo); //1 1 1 1 1
  vector<Ralo> ret;
  ret.push_back({1,2,3,4,5});
  ret.push_back({1,2,3,4,6});
  ret.push_back({});
  ret.push_back({1,3});
  for(Ralo ralo:ret){
    print(ralo);
  }
  /*
  1 2 3 4 5
  1 2 3 4 6
  0 0 0 0 0
  1 3 0 0 0
  */

  string a[3] = {"111", "222", "33"};
  sort(a, a+3, compare);
  for(string b : a) cout << b << " "; //33 111 222

  Ralo b[3] = {{1,2}, {1,3}, {0,4}};
  sort(b, b+3, compareR);
  for(Ralo A : b) cout << A.a << " : " << A.b << '\n';
  /*
  0 : 4
  1 : 2
  1 : 3
  */

  for(int i = 10; i >= 1; i--){
    v.push_back({i, 10 - i});
  }
  sort(v.begin(), v.end(), cmp);
  for(auto it : v) cout << it.y << " : " << it.x << '\n';
  /*
  1 : 9
  2 : 8
  3 : 7
  4 : 6
  5 : 5
  6 : 4
  7 : 3
  8 : 2
  9 : 1
  10 : 0
  */

  return 0;
}