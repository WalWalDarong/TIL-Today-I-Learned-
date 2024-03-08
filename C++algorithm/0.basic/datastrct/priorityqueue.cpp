#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int> > pq; //오름차순
priority_queue<int> pq2; //내림차순
priority_queue<int, vector<int>, less<int>> pq3; //내림차순

//구조체를 담은 우선순위 큐
struct Point{
  int y, x;
  Point(int y, int x) : y(y), x(x){}
  Point(){y = -1; x = -1;}
  bool operator < (const Point & a) const {
    return x > a.x;
  }
};

priority_queue<Point> pqq;

int main() {
  //우선순위 큐(priority queue): 각 요소에 어떠한 우선순위가 추가로 부여되어 있는 컨테이너
  /*
  우선순위 큐에서 우선순위가 높은 요소는 우선순위가 낮은 요소보다 먼저 제공됨
  일부 구현에서 두 요소의 우선순위가 같으면 대기열에 포함된 순서에 따라 제공됨
  다르 구현에서 동일한 우선순위를 가진 요소의 순서는 정의되지 않은 상태로 유지됨
  */

  /*
  참고:
  힙은 완전 이진 틀로 최소힙 또는 최대힙이 있따.
  삽입, 삭제, 탐색, 수정 O(logN)
  최대 힙은 루트 노드에 최대값, 최소 힙은 루트 노드에 최소값
  */

  //메서드는 stack과 동일: size(), top(), pop(), push()

  //int형 우선순위 큐: greater<타입> 오름차순, less<타입> 내림차순
  //기본 값이 내림차순 > priority_queue<타입> 쓰면 타입에 대한 내림차순으로 정렬됨
  for(int i = 5; i >= 1; i--){
    pq.push(i); pq2.push(i); pq3.push(i);
  }
  while(pq.size()){
    cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << '\n';
    pq.pop(); pq2.pop(); pq3.pop();
  }
  /*
  1 : 5 : 5
  2 : 4 : 4
  3 : 3 : 3
  4 : 2 : 2
  5 : 1 : 1
  */ 

  pqq.push({1, 1});
  pqq.push({2, 2});
  pqq.push({3, 3});
  pqq.push({4, 4});
  pqq.push({5, 5});
  pqq.push({6, 6});
  cout << pqq.top().x << '\n'; //1
  //< 연산자에 x > a.x 하여 내림차순 정렬이어야 하지만, 우선순위 큐에 커스텀 정렬을 넣을 때 반대로 넣어야 하는 특징 있음
  //< 연산자에 x < a.x 넣으면 내림차순 정렬됨
  /*
  아래도 내림차순

  struct Point{
    int y, x;
  };
  struct cmp{
    bool operator()(Point a, Point b){
      return a.x < b.x;
    }
  };
  */


  return 0;
}

/*
자료구조 시간 복잡도 - 최악 BigO
      |참조     |탐색    |삽입     |삭제     |
-----------------------------------------
배열   |O(1)    |O(n)   |O(n)    |O(n)   |
-----------------------------------------
스택   |O(n)    |O(n)   |O(1)   |O(1)   |
-----------------------------------------
큐     |O(n)    |O(n)   |O(1)    |O(1)   |
-----------------------------------------
연결리스트|O(n)   |O(n)   |O(1)   |O(1)   |
-----------------------------------------
맵     |O(logn)|O(logn)|O(logn)|O(logn)|
-----------------------------------------
*/