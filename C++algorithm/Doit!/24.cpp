#include <bits/stdc++.h>
using namespace std;
int n;
int mx;
vector<bool> pn(100000004, false);
int main(){
  cin >> n;
  mx = pow(10, n);
  pn[2] = true;
  pn[3] = true;

  for(int i = 5; i < mx; i += 2){
    pn[i] = true;
    for(int j = i / 2; j > 2; j --){
      if(i % j == 0){
        pn[i] = false;
        break;
      }
    } 
  }

  for(int i = mx/10 + 1; i < mx; i++){
    bool ret = true;
    string stri = to_string(i);

    for(int j = 1; j <= n; j++){
      if(!pn[stoi(stri.substr(0,j).c_str())]){
        ret = false;
        break;
      }
    }

    if(ret) {
      cout << i << '\n';
    }
  }


  return 0;
}
