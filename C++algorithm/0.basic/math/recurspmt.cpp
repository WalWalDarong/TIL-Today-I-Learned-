#include <bits/stdc++.h>
using namespace std;
//순열 - 재귀 함수 활용

int a[3] = {1, 2, 3};
int n = 3, r = 3; //n: 전체 개수 , r: 뽑을 개수 
void print(){
  for(int i = 0; i < r; i++){
    cout << a[i] << " ";
  }
  cout << "\n";
}
//depth: 트리의 레벨, 높이
void makePermutation(int n, int r, int depth){
  if(r == depth){
    print();
    return;
  }
  for(int i = depth; i < n; i++){
    cout << "i: "<< i << ", depth: " << depth << "를 바꿈\n"; 
    swap(a[i], a[depth]);
    makePermutation(n, r, depth + 1);
    cout << "i: "<< i << ", depth: " << depth << "를 다시 바꿈\n";
    swap(a[i],a[depth]);
  }
  return;
}

int main() {
  makePermutation(3, 3, 0);
  /*
  1 2 3 
  1 3 2 
  2 1 3 
  2 3 1 
  3 2 1 
  3 1 2 
  */

  //디버깅 코드 추가 버전
  /*
  i: 0, depth: 0를 바꿈
  i: 1, depth: 1를 바꿈
  i: 2, depth: 2를 바꿈
  1 2 3 
  i: 2, depth: 2를 다시 바꿈
  i: 1, depth: 1를 다시 바꿈
  i: 2, depth: 1를 바꿈
  i: 2, depth: 2를 바꿈
  1 3 2 
  i: 2, depth: 2를 다시 바꿈
  i: 2, depth: 1를 다시 바꿈
  i: 0, depth: 0를 다시 바꿈
  i: 1, depth: 0를 바꿈
  i: 1, depth: 1를 바꿈
  i: 2, depth: 2를 바꿈
  2 1 3 
  i: 2, depth: 2를 다시 바꿈
  i: 1, depth: 1를 다시 바꿈
  i: 2, depth: 1를 바꿈
  i: 2, depth: 2를 바꿈
  2 3 1 
  i: 2, depth: 2를 다시 바꿈
  i: 2, depth: 1를 다시 바꿈
  i: 1, depth: 0를 다시 바꿈
  i: 2, depth: 0를 바꿈
  i: 1, depth: 1를 바꿈
  i: 2, depth: 2를 바꿈
  3 2 1 
  i: 2, depth: 2를 다시 바꿈
  i: 1, depth: 1를 다시 바꿈
  i: 2, depth: 1를 바꿈
  i: 2, depth: 2를 바꿈
  3 1 2 
  i: 2, depth: 2를 다시 바꿈
  i: 2, depth: 1를 다시 바꿈
  i: 2, depth: 0를 다시 바꿈
  */

  return 0;
}