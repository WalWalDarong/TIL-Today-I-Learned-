#include <bits/stdc++.h>
using namespace std;

stack<string> stk;

int main(){
  //stack: 주로 문자열 폭발, 아름다운 괄호 만들기, 짝찾기 키워드
  //"교차하지 않고"라는 문장이 나오면 스택을 고려해야

  stk.push("장"); //push(val): val추가
  stk.push("다");
  stk.push("희");
  stk.push("화");
  stk.push("이");
  stk.push("팅");
  while(stk.size()){ //size(): 스택의 크기
    cout << stk.top() << '\n'; //top(): 가장 위에 있는 요소 참조
    stk.pop(); //pop(): 마지막 요소 삭제
  }
  /*
  팅
  이
  화
  희
  다
  장
  */

  return 0;
}