#include <bits/stdc++.h>
using namespace std;
vector<int> V;
int N = 0;
string tmp;
int sum;

int main(){
  cin >> N;
  cin >> tmp;
  for(int i = 0; i < N; i++){
    sum += (tmp[i] - '0');
  }


  cout << sum << "\n";

  return 0;
}