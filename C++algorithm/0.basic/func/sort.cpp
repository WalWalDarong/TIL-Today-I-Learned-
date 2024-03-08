#include <bits/stdc++.h>
using namespace std;

vector<int> a;
int b[5];
bool cmp(pair<int, int> a, pair<int, int> b){
  return a.first > b.first;
}

int main() {
  //sort(first, last, *커스텀비교함수) O(nlogn)
  //[first, last)
  /*
  default: 오름차순
  커스텀 비교 함수로 정렬 기준 입력
  greater<타입>() 입력 시 내림차순
  less<T>() 오름차순
  */ 
  for(int i = 5; i >= 1; i--) b[i-1] = i;
  for(int i = 5; i >= 1; i--) a.push_back(i);
  //오름차순
  sort(b, b + 5);
  sort(a.begin(), a.end());

  for(int i : b) cout << i << ' ';
  cout << '\n';
  for(int i : a) cout << i << ' ';
  cout << '\n';

  //less<T>() 활용한 오름차순
  sort(b, b + 5, less<int>());
  sort(a.begin(), a.end(), less<int>());

  for(int i : b) cout << i << ' ';
  cout << '\n';
  for(int i : a) cout << i << ' ';
  cout << '\n';

  //내림차순
  sort(b, b + 5, greater<int>());
  sort(a.begin(), a.end(), greater<int>());

  for(int i : b) cout << i << ' ';
  cout << '\n';
  for(int i : a) cout << i << ' ';
  cout << '\n';

  /*
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  1 2 3 4 5 
  5 4 3 2 1 
  5 4 3 2 1 
  */

  vector<pair<int, int>> v;
  //따로 설정하지 않으면, first, second, third 순으로 차례차례 오름차순 정렬

  for(int i = 10; i >= 1; i--) v.push_back({i, 10-i});
  sort(v.begin(), v.end());

  for(auto it: v) cout << it.first << " : " << it.second << "\n";
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

  //first는 내림차순, second는 오름차순 하려면 커스텀 비교함수 cmp를 만들어 매개변수로 넣어야
  sort(v.begin(), v.end(), cmp);
  for(auto it: v) cout << it.first << " : " << it.second << "\n";
  /*
  10 : 0
  9 : 1
  8 : 2
  7 : 3
  6 : 4
  5 : 5
  4 : 6
  3 : 7
  2 : 8
  1 : 9
  */


  return 0;
}