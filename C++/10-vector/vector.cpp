//벡터(vector)

/*
기존 배열과 같은 특징을 가지면서 배열의 단점을 보완한 '동적 배열 형태'
1. 동적으로 원소를 추가할 수 있다. 크기가 자동으로 늘어난다.
2. 맨 마지막 위치에 데이터를 삽입하거나 삭제할 때는 문제가 없지만,
중간 데이터 삽입/삭제는 배열과 같은 메커니즘으로 동작한다.
3. 배열과 마찬가지로 인덱스를 이용하여 각 데이터에 접근할 수 있다.
*/

#include <iostream>
#include <vector> //vector 헤더 인클루드 해야 함

using namespace std;

int main() {

  vector<int> A; //A라는 vector 선언

  A.push_back(10); //10 삽입
  A.push_back(30); 
  A.push_back(5); 
  A.push_back(8); 
  A.push_back(6); 

  A.push_back(1); 
  A.insert(A.begin(), 7); //insert에서 제일 앞 자리에 7을 넣음
  A.insert(A.begin() + 2, 10); //begin에서 2칸 더 간 자리에 10 넣음

  A[4] = -5; //값 변경
  A.pop_back(); //삭제
  A.erase(A.begin() + 3); //3번째 칸 삭제
  
  cout << A.size() << endl; //크기, capacity와 약간 다름 (vector에서 자동으로 capacity를 더 넉넉하게 잡음)
  cout << A.front() << endl; //첫번째 값
  cout << A.back() << endl; //마지막 값
  cout << A[3] << endl; //index 3 값
  cout << A.at(5) << endl; //5번째 값

  A.clear(); //전체 삭제

  //디버깅 중요
  return 0;
}
