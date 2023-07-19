#include <bits/stdc++.h>
using namespace std;

const int max_n = 40;
bool che[max_n + 1];

//max_n까지 소수를 만드는 함수
//배열의 크기가 필요해,1000만 이상이 되면 사용하기 어렵다.
vector<int> era(int mx_n){
  vector<int> v;
  for(int i = 2; i <= mx_n; i++){
    if(che[i]) continue;
    for(int j = 2*i; j <= mx_n; j += i){
      che[j] = 1;
    }
  }
  for(int i = 2; i <= mx_n; i++) if(che[i] == 0) v.push_back(i);
  return v;
}

//소수 판별 bool 함수
bool check(int n){
  if(n <= 1) return 0;
  if(n == 2) return 1;
  if(n % 2 == 0) return 0;
  for(int i = 2; i * i <= n; i++){
    if(n % i == 0) return 0;
  }
  return 1;
}

int main() {
  //소수가 아닌 값들에 대해 불리언 배열을 만들어 소수만 걸러내는 방법

  //max_n까지의 소수 만들어서 출력하기
  vector<int> a = era(max_n);
  for(int i : a) cout << i << "\n";
  /*
  2
  3
  5
  7
  11
  13
  17
  19
  23
  29
  31
  37
  */

  for(int i = 1; i <= 20; i++){
    if(check(i)){
      cout << i << "는 소수입니다.\n";
    }
  }
  /*
  2는 소수입니다.
  3는 소수입니다.
  5는 소수입니다.
  7는 소수입니다.
  11는 소수입니다.
  13는 소수입니다.
  17는 소수입니다.
  19는 소수입니다.
  */
  return 0;
}