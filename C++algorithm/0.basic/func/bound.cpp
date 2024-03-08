#include <bits/stdc++.h>
using namespace std;

int main() {
  //lower_bound(), upper_bound()
  //반드시 정렬된 배열에 사용
  vector<int> a{1, 2, 3, 3, 3, 4};
  cout << lower_bound(a.begin(), a.end(), 3) - a.begin() << '\n'; //2, 요소의 위치 index
  cout << upper_bound(a.begin(), a.end(), 3) - a.begin() << '\n'; //5

  //3이 시작되는 최소 시작점 lower_bound, 초과하는 지점 upper_bound
  //3의 개수 찾기
  cout << upper_bound(a.begin(), a.end(), 3) - lower_bound(a.begin(), a.end(), 3) << '\n'; //3
  //찾는 요소가 없으면 근방 index를 반환한다.

  return 0;
}