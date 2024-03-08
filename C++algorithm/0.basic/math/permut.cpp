#include <bits/stdc++.h>
using namespace std;

void printV(vector<int> &v){
  for(int i = 0; i < v.size(); i++){
    cout << v[i] << ' ';
  }
  cout << '\n';
}

int main() {
  //순열
  //next_permutation [from, to): 오름차순 기반, 오름차순으로 정렬된 상태에서 사용해야 함
  //오름차순으로 정렬 안 된 배열에는 사용 못함
  //prev_permutation은 내림차순이지만 잘 안씀
  int a[3] = {1,2,3};
  vector<int> v;

  for(int i = 0; i < 3; i++) v.push_back(a[i]);

  do{
    printV(v);
  }while(next_permutation(v.begin(), v.end()));
  /*
  1 2 3 
  1 3 2 
  2 1 3 
  2 3 1 
  3 1 2 
  3 2 1   
  */
 cout << " -----------" << '\n';

  //순열 계산할 범위 조정 가능
  do{
    printV(v);
  }while(next_permutation(v.begin(), v.begin() + 2));
  /*
  1 2 3 
  2 1 3 
  */
  
  cout << " -----------" << '\n';

  v.clear();
  for(int i = 2; i >= 0; i--) v.push_back(a[i]);

  do{
    printV(v);
  }while(prev_permutation(v.begin(), v.end()));
  /*
  3 2 1 
  3 1 2 
  2 3 1 
  2 1 3 
  1 3 2 
  1 2 3
  */
  cout << " -----------" << '\n';

  //array 기반
  do{
    for(int i : a) cout << i << " ";
    cout << '\n';
  }while(next_permutation(a, a + 3)); //배열 이름을 pointer to decay로 활용
  /*
  vector와 달리 begin, end를 사용할 수 없음
  같은 코드
  while(next_permutation(&a[0], &a[3]));
  while(next_permutation(&a[0], &a[0] + 3));
  */

  /*
  1 2 3 
  1 3 2 
  2 1 3 
  2 3 1 
  3 1 2 
  3 2 1 
  */

  return 0;
}