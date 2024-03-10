#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A; // 함수에서 사용할 값 미리 선언
vector<int> tmp(1000004, 0);
void mergesort(int S, int E){
  if(E - S < 1) {
    return;
  }

  int M = S + ((E - S) / 2); 
  mergesort(S, M);
  mergesort(M + 1, E);

  for(int i = S; i <= E; i++){
    tmp[i] = A[i];
  } // 필요한 구역만 복사

  int i=S;
  int j= M + 1;
  int k = S; // 원본 배열에서 진행할 자리값

  // 원본 배열 바뀌는 중이니까, tmp 배열 값으로 비교
  while(i <= M && j <= E){
    if(tmp[i] < tmp[j]){
      A[k] = tmp[i];
      i++;
      k++;
    } else {
      A[k] = tmp[j];
      j++;
      k++;
    } 
  }
  
  while(i <= M){
    A[k] = tmp[i];
    i++;
    k++;
  }

  while(j <= E){
    A[k] = tmp[j];
    j++;
    k++;
  }
}; // 정의문 끝에 ; 필수

int main(){
  cin >> n;
  for(int i = 0; i < n; i++){
    int tmp;
    cin >> tmp;
    A.push_back(tmp);
  }

  mergesort(0, n - 1);

  for(int i = 0; i < n; i++){
    cout << A[i] << '\n';
  }

  return 0;
}