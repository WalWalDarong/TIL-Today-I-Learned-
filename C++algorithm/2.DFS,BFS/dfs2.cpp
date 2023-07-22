#include <bits/stdc++.h>
using namespace std;
//2차원 배열 dfs
//배열 크기는 넉넉하게 최대값으로
int n, m, ret;
vector<vector<int>> a;
vector<bool> vst;

void dfs(int u){
  vst[u] = 1;

  for(int v : a[u]){
    if(vst[v]==0) dfs(v);
  }
  return;
}

int main(){
  cin >> n >> m;

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      bool tmp;
      cin >> tmp;
      if(tmp) a[i].push_back(j);
    }
  }

  for(int i = 0; i < n; i++){
    if(vst[i] == 0) dfs(i); ret++;
  }

  cout << ret <<"\n";
  
  return 0;
}