#include <bits/stdc++.h>
using namespace std;

map<int, int> mp;
int main() {
  //중복 제거 방법
  //1. map 활용
  vector<int> v{1, 1, 2, 2, 3, 3, 3};
  for(int i : v) {
    if(mp[i]){
      continue;
    } else {
      mp[i] = 1;
    }
  }
  
  vector<int> ret;
  for(auto it : mp)ret.push_back(it.first);
  for(int i : ret) cout << i << '\n';

  //2. unique() 활용, O(n)
  auto it = unique(v.begin(), v.end());
  //중복되지 않은 요소로 채운 후, 그 다음 이터레이터를 반환한다.

  cout << it - v.begin() << '\n'; //3, 중복되지 않는 요소의 개수
  //앞에서부터 중복되지 않게 채운 뒤, 나머지 요소들은 그대로 둔다.

  for(int i : v) cout << i << ' '; //1 2 3 2 3 3 3 
  cout << '\n';
  cout << *it << '\n'; //2, unique를 적용하면 중복 없는 배열 이후 첫번째 주소를 반환
  cout << &*it << '\n'; //0x12ce06a2c


  vector<int> vv{1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8 ,9};
  it = unique(vv.begin(), vv.end());
  for(int i : vv) cout << i << ' '; //1 2 3 4 5 6 7 8 9 7 8 9
  cout << '\n';

  vector<int> vvv{2, 2, 1, 1, 2, 2, 3, 3, 4, 5, 6, 7, 8 ,9};
  it = unique(vvv.begin(), vvv.end());
  for(int i : vvv) cout << i << ' '; //2 1 2 3 4 5 6 7 8 9 6 7 8 9
  cout << '\n';
  cout << *it << '\n';

  //unique는 sort와 함께 사용해야 함
  sort(vvv.begin(), vvv.end());
  vvv.erase(unique(vvv.begin(), vvv.end()), vvv.end());
  //erase(from, to): from부터 end까지 삭제

  for(int i : vvv) cout << i << ' '; //1 2 3 4 5 6 7 8 9

  return 0;
}