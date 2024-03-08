#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> N;

  int ret = 1;

  for(int i = N/2 + 1; i > 0; i--){
    int tmp = i;
    int sum = tmp;
    while(sum < N){
      tmp--;
      sum += tmp;
      if(sum == N) {
        ret++;
        break;
      }
    }
  }

  cout << ret <<'\n';
  return 0;
}