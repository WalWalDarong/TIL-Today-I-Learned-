#include <bits/stdc++.h>
using namespace std;
int N;
vector<int> V;
int mx = 0;
double sum;

int main(){
  cin >> N;
  for (int i = 0; i < N; i++){
    int tmp;
    cin >> tmp;
    V.push_back(tmp);
  }

  // for(int i:V){
  //   if(i > mx) mx = i;
  // }

  // for(int i:V){
  //   sum += (double)i / (double)mx * 100.0;
  // }

  for(int i : V) {
    if(i > mx) mx = i;
    sum += i;
  }

  cout << sum/(double)mx /(double)N * 100.0 << '\n';
 return 0;
}