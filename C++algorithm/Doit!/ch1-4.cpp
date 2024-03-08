#include <bits/stdc++.h>
using namespace std;
int N, M;
int S[1027][1027];
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  
  cin >> N >> M;
  for(int i = 1; i <= N; i++){
    for(int j =1; j <= N; j++){
      int tmp;
      cin >> tmp;
      S[i][j] = S[i][j-1] + tmp; 
    }
  }

  for(int i = 0; i < M; i++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int sum = 0;
    for(int j = a; j <= c; j++){
      sum += S[j][d] - S[j][b - 1];
    }
    
    cout << sum << "\n";
  }

  return 0;
}