#include <bits/stdc++.h>
using namespace std;
const int n = 6;
vector<int> a[n];
bool vst[n];
void dfs(int u){
  vst[u] = 1;
  cout << u << '\n';

  for(int v: a[u]){
    if(vst[v] == 0) dfs(v);
  }
  cout << u << "로부터의 함수가 종료되었습니다.\n";
  return;
}

int main(){
  a[1].push_back(2);
  a[1].push_back(3);
  a[2].push_back(4);
  a[2].push_back(5);
  a[4].push_back(2);

  dfs(1);

  return 0;
}