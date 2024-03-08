#include <bits/stdc++.h>
using namespace std;
const int V = 10; //const 꼭 써줘야 함
vector<int> adj[V];
bool visited[V];
void go(int from){
  visited[from] = 1;
  cout << from << '\n';

  for(int i : adj[from]){
    if(visited[i] == 0) go(i);
  }
  return;
}

int main(){
  adj[1].push_back(2);
  adj[1].push_back(3);
  adj[2].push_back(1);
  adj[3].push_back(1);
  adj[3].push_back(4);
  adj[4].push_back(3);

  for(int i = 0; i < V; i++){
    if(adj[i].size() && visited[i] == 0) go(i);
  }
  //size로 연결된 정점이 있는지 확인

  return 0;
}