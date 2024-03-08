#include <bits/stdc++.h>
using namespace std;

int fact_rec(int n){
  if(n == 1 | n == 0) return 1;
  return n * fact_rec(n - 1);
}

int fact_for(int n){
  int ret = 1;
  for(int i = 1; i <= n; i++){
    ret *= i;
  }

  return ret;
}

int fibo(int n) {
  cout << "fibo: " << n << '\n';
  if(n == 0 || n == 1) return n;
  return fibo(n - 1) + fibo(n - 2);
}

int n = 5;

int main() {
  /*
  재귀함수의 3가지 특징
  1. 재귀함수는 정의 단계에서 자신을 재참조 한다.
  2. 전달되는 상태인 매개변수가 달라질 뿐 똑같은 일을 하는 함수다.
  3. 큰 문제를 작은 부분 문제로 나눠서 풀 때 사용한다.
  
  주의 사항
  1. 반드시 기저 사례 edge case가 있어야 한다.
  2. 사이클이 잇으면 안된다. 무한 반복.
  3. 반복문으로 가능하다면 반복문이 더 빠르다. 함수 호출 코스트.
  */

  cout << fact_for(n) << '\n'; //120
  cout << fact_rec(n) << '\n'; //120

  cout << fibo(n) << '\n';
  /*
  fibo: 5
  fibo: 4
  fibo: 3
  fibo: 2
  fibo: 1
  fibo: 0
  fibo: 1
  fibo: 2
  fibo: 1
  fibo: 0
  fibo: 3
  fibo: 2
  fibo: 1
  fibo: 0
  fibo: 1
  5
  */
  return 0;
}