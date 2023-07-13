#include <bits/stdc++.h>
using namespace std;

int main() {
  //vector
  vector<int> v;
  for(int i = 1; i <= 10; i++) v.push_back(i);
  //push_back, emplace_back 같은 역할
  v.pop_back();
  v.erase(v.begin(), v.begin() + 3); //인자 하나면 그 위치의 요소만 지움
  for(int a : v) cout << a << " "; //4 5 6 7 8 9
  cout << endl;


  auto a = find(v.begin(), v.end(), 100); //find는 vector 메서드 아니고, STL임
  if(a == v.end()) cout << "not found" << '\n'; //not found
  

  fill(v.begin(), v.end(), 10); //STL
  for(int a : v) cout << a << " "; //10 10 10 10 10 10
  cout << '\n';

  v.clear();
  for(int a : v) cout << a << " ";

  //vector도 정적할당 가능하다.
  vector<int> v2(5, 100); //요소 5개가 100인 vector;
  for(int a : v2) cout << a << ' '; //100 100 100 100 100
  cout << '\n'; 

  vector<int> v3{10, 20, 30, 40, 50};
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  //위 세 줄 의미를 모르겠음

  for(int a : v3) cout << a << ' '; //10 20 30 40 50
  cout << '\n';

  //vector로 2차원 만드는 방법 3가지
  vector<vector<int>> vv;
  vector<vector<int>> vv2(10, vector<int>(10, 0)); //0으로 초기화된 10*10 vector
  vector<int> vv3[10]; //vector<int>가 10개인 배열 선언

  for(int i = 0; i < 10; i++){
    vector<int> temp;
    vv.push_back(temp);
  }

  return 0;
}