#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main() {
  //next_permutation
  //오름차순 기반. 반드시 오름차순으로 정렬되어 있어야 함
  int a[] = { 1, 2, 3 };

  do{
    for(int i : a) cout << i << " ";
    cout << '\n';
  }while(next_permutation(&a[0], &a[0] + 3)); // (a, a+3)도 같음

  //vector풀이
  vector<int> b = { 1, 2, 3, 100, 200 };
  sort(b.begin(), b.end());
  do{
    //2개만 뽑는 순열
    for(int i = 0; i < 2; i++) {
      cout << a[i] << " ";
    }
    cout << '\n';
  }while(next_permutation(b.begin(), b.end()));

  return 0;
}