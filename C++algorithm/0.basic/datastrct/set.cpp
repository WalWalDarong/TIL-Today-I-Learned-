#include <bits/stdc++.h>
using namespace std;

int main() {
  //set: 중복 허용 안함, 중복된 값은 제거, 자동 정렬, 메서드는 map과 같음
  //pair, int형 넣을 수 있음
  set<pair<string, int>> st;
  st.insert({"test", 1});
  st.insert({"test", 1});
  st.insert({"test", 1});
  cout << st.size() << '\n'; //1

  st.insert({"test2", 1});
  st.insert({"test", 2});

  for(auto it : st){
    cout << it.first << " : " << it.second << '\n';
  }
  /*
  test : 1
  test : 2
  test2 : 1
  */

  set<int> st2;
  st2.insert(2);
  st2.insert(1);
  st2.insert(2);

  for(auto it : st2){
    cout << it << '\n';
  }
  /*
  1
  2
  */
  
  //중복 제거: set VS erase(unique())
  /*
  set사용 중복 제거 방법
  1. 중복된 배열 vector 생성됨
  2. set 사용해서 중복 제거
  3. 다시 새로운 vector를 만들어 요소 집어넣기
  > 새로운 vector와 set 2개의 자료구조가 더 만들어짐
  >erase(unique())는 새로운 데이터 필요 없음 (더 효율적)
  */

  //multiset: 중복 가능한 set, 자동 정렬, 메서드는 map과 동일
  multiset<int> s;
  for(int i = 5; i >= 1; i--){
    s.insert(i);
    s.insert(i);
  }
  
  for(int it : s) cout << it << ' ';
  cout << '\n';
  //1 1 2 2 3 3 4 4 5 5 
  
  return 0;
}