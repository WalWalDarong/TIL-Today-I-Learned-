#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int data;
  Node* next;
  Node(){
    data = 0;
    next = NULL;
  }
  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

//C++에서는 list로 이중 연결 리스트를 쉽게 구현할 수 있음
//list = 이중 연결 리스트
list<int> a;
void print(list<int> a){
  for(auto it : a) cout << it << ' ';
  cout << '\n';
};

int main() {
  //linked list: 랜덤 접근 불가, 순차적 접근만 가능
  //next, prev 포인터로 연결, 중복 허용

  /*
  1. 싱글 연결 리스트
  : next 포인터만 존재, 한 방향으로만 연결

  2. 이중 연결 리스트
  : prev, next 두 개의 포인터로 양방향 연결

  3. 원형 연결 리스트
  : 마지막 노드와 첫 번째 노드 연결되어 원 형성
  싱글 원형, 이중 원형 2가지
  */

  for(int i = 1; i <= 3; i++) a.push_back(i); //뒤에 value 넣기
  for(int i = 1; i <= 3; i++) a.push_front(i); //앞에서부터 value 넣기

  auto it = a.begin();
  it++;
  a.insert(it, 1000); //insert(iterator position, value); 요소를 몇 번째에 삽입한다.
  print(a); //3 1000 2 1 1 2 3

  it = a.begin();
  it++;
  a.erase(it); //erase(index); index번째 요소 삭제
  print(a); //3 2 1 1 2 3

  a.pop_front(); //맨 앞 삭제
  a.pop_back(); //맨 끝 삭제
  print(a); //2 1 1 2

  cout << a.front() << " : " << a.back() << '\n'; //2 : 2
  //front(): 맨 앞 요소 참조
  //back(): 맨 뒤 요소 참조
  a.clear(); //모든 요소 삭제 

  print(a); //

  return 0;
}