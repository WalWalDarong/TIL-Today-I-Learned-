#include <bits/stdc++.h>
using namespace std;
int N;
int ret = 1;
int st = 1;
int ed = 1;
int sum = 1;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);
  cin >> N;
  
  while(ed != N) {
    if(sum == N){
      ret++;
      ed++;
      sum = sum + ed;
    } else if(sum > N){
      sum = sum - st;
      st++;
    } else {
      ed++;
      sum = sum + ed;
    }
  }

  cout << ret << '\n';

  return 0;
}