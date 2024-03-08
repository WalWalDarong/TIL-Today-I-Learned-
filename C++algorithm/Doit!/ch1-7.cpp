#include <bits/stdc++.h>
using namespace std;
int N, M;
int ret = 0;
vector<int> v(15004, 0);
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  cin >> N >> M;

  for(int i = 0; i < N; i++){
    int tmp = 0;
    cin >> tmp;
    v[i] = tmp;
  }

  int st = 0;
  int ed = 1;

  while(st < N){
    if(v[st] + v[ed] == M) ret++;
  
    if(ed < N - 1){
      ed++;
    } else {
      st++;
      ed = st + 1;
    }
  }

  cout << ret << '\n';
  return 0;
}