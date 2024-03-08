#include <bits/stdc++.h>
using namespace std;

int n = 5, k = 3, a[5] = {1, 2, 3, 4, 5};

void print(vector<int> b){
  for(int i : b) cout << a[i] << " ";
  cout << "\n";
}

void combi(int start, vector<int> b){
  if(b.size() == k){
    print(b);
    return;
  }
  for(int i = start + 1; i < n; i++){
    b.push_back(i);
    combi(i, b);
    b.pop_back();
  }
  return;
}

int main() {
  //재귀를 이용한 조합
  vector<int> b; //b는 빈배열
  combi(-1, b);
  /*
  1 2 3 
  1 2 4 
  1 2 5 
  1 3 4 
  1 3 5 
  1 4 5 
  2 3 4 
  2 3 5 
  2 4 5 
  3 4 5
  */

  cout << "---------------\n";
  //k만큼 중첩 for문(k가 작을 때 사용)
  for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
      for(int k = 0; k < j; k++){
        cout<< a[i] << " " << a[j] << " " << a[k] << "\n";
      }
    }
  }
  /*
  3 2 1
  4 2 1
  4 3 1
  4 3 2
  5 2 1
  5 3 1
  5 3 2
  5 4 1
  5 4 2
  5 4 3
  */
  cout << "---------------\n";

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = j + 1; k < n; k++){
        cout<< a[i] << " " << a[j] << " " << a[k] << "\n";
      }
    }
  }
  /*
  1 2 3
  1 2 4
  1 2 5
  1 3 4
  1 3 5
  1 4 5
  2 3 4
  2 3 5
  2 4 5
  3 4 5
  */

  return 0;
}