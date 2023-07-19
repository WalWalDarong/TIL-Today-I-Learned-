#include <bits/stdc++.h>
using namespace std;
//공식을 외우면 편하다

int main(){
  //등차수열의 합
  //1씩 증가할 때
  int n = 5;
  int ret = 0;
  for(int i = 1; i <= 5; i++){
    ret += i;
  }
  cout << ret << '\n'; //15
  cout << n*(n+1)/2 << '\n'; //15

  //초항이 a, 길이가 n, 마지막항이 l일 때
  int a = 3, l = 23;
  cout << n*(a+l)/2 <<'\n'; //65

  //등비수열의 합
  //a: 초항, r: 공비, n: 더하는 것의 개수
  int aa = 1, r = 2, nn = 4;
  vector<int> v;
  cout << aa*((int)pow(r, nn) - 1) / (r - 1); //pow(): 승수 구하는 메서드, 2의 n제곱
  cout << '\n';
  for(int i = 0; i < nn; i++){
    v.push_back(aa);
    aa *= r;
  }
  for(int i : v) cout << i << ' ';
  /*
  15
  1 2 4 8 
  */
  
  return 0;
}