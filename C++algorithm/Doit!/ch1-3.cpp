#include <bits/stdc++.h>
using namespace std;
int N, M;
// int V[100004];
int S[100004];
int sum = 0;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> N >> M;
  S[0] = 0;
  for(int i = 1; i <= N; i++){
    int tmp = 0;
    cin >> tmp;
    sum += tmp;
    S[i] = sum;
  }

  for(int a = 0; a < M; a++){
    int i, j;
    cin >> i >> j;
    cout << S[j] - S[i - 1] <<'\n';
  }
  int SS[3] = {};
  cout << SS[0] << '\n'; // 값이 없을 때는 0;
  
  return 0;
}