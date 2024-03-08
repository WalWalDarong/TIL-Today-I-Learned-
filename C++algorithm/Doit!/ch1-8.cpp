// 자연수가 아닌 정수 주의! 마이너스값도 있음
// 더 큰 값과 작은 값을 더해서 중간 값이 나올 수 있음

#include <bits/stdc++.h>
using namespace std;
int N; // 1~2,000
// -1,000,000,000 ~ +
int ret = 0;
int main(){
  cin >> N;
  vector<int> v(N); 
  for(int i = 0; i < N; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  for(int k = 0; k < N; k++){
    int i = 0;
    int j = N - 1;

    while(j > i){
      if(v[i]+v[j] == v[k]) {
        if(i != k && j != k){
          ret++;
          break;
        } else if(j == k) {
          j--;
        } else if(i == k){
          i++;
        }
      } else if (v[i]+v[j] < v[k]){
        i++;
      } else {
        j--;
      }
    }
  }

  cout << ret << '\n';

  return 0;
}