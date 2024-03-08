#include <bits/stdc++.h>
using namespace std;

queue<int> q;

int main() {
  //queue: 선입선출, 스택과 반대
  for(int i = 1; i <= 10; i++) q.push(i); //push(val): val 추가
  while(q.size()){//size(): 큐 크기
    cout << q.front() << ' '; //front(): 가장 앞 요소 참조
    q.pop(); //pop(): 가장 앞 요소 제거
  }
  cout << '\n';
  //1 2 3 4 5 6 7 8 9 10

  //deque: 앞뒤로 삽입, 삭제, 참조 가능
  deque<int> dq;
  dq.push_front(1);
  dq.push_back(2);
  dq.push_back(3);
  cout << dq.front() << '\n'; //1
  cout << dq.back() << '\n'; //3
  cout << dq.size() << '\n'; //3

  dq.pop_back();
  dq.pop_front();

  cout << dq.size() << '\n'; //1

  return 0;
}