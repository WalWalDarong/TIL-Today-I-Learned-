#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
  //10진법을 n진법으로 바꾸기
  //2진법, 3진법, 16진법(특수)
  int n = 100;
  int b = 2;
  while(n > 1){
    v.push_back(n%b);
    n /= b;
  }
  if(n == 1) v.push_back(1);
  reverse(v.begin(), v.end());
  for(int a : v){
    //if(a >= 10)~~ 16진법에 필요한 조건
    //16진법: 0~F로 표현하는 방법
    if(a >= 10) cout << char(a+55);
    else cout << a;
  }
  //1100100
  return 0;
}