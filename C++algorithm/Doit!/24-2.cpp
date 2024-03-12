#include <bits/stdc++.h>
using namespace std;
int n;
int mx;
vector<bool> pn(100000004, false);
vector<bool> visited(100000004, false);
bool findPN(string si){
   if(si.size() == 1) {
    return pn[stoi(si.c_str())];
   }
    
   string prevStr = si.substr(0, si.size() - 1);
    bool prev;
    if(!pn[stoi(prevStr.c_str())]){
        return false;
    } else {
        prev = findPN(prevStr);
    }
           
   bool now = pn[stoi(si.c_str())];
    
   if(prev && now) {
    return true;
   } else {
    return false;
   }
};

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
      bool ret = findPN(to_string(i));
      if(ret) cout << i << '\n';
  }


  return 0;
}