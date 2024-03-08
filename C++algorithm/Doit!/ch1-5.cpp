#include <bits/stdc++.h>
using namespace std;
int N, M;
int s[110];
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> N >> M;
  int fst;
  cin >> fst;
  s[0] = fst;
  for(int i = 1; i < N; i++){
    int tmp;
    cin >> tmp;
    s[i] = s[i -1] + tmp;
  }

  int ret = 0;
  for(int i = 0; i < N; i++){
    for(int j = i; j < N; j++){
      if((s[i] - s[j - 1]) % M == 0){
        ret ++;
      }
    }
  }

  // 각 S[i]의 나머지 배열을 구하고
  // 나머지가 0인 경우 + 나머지가 같은 경우 nC2
  // 나머지가 같으면 나머지 m[i] - m[j]이 0이 되기 때문
  // 나머지 공식에 의함 (A + B) % n == (A % n) + (B % n)
  // 조합 공식 활용해서 여러개 중 2개 뽑을 때는 n*(n-1)/2로 구할 수 있다.

  cout << ret << '\n';
}