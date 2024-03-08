#include <bits/stdc++.h>
using namespace std;
int S;
int P;
string str;
vector<int> v(4);
int rst = 0;
int main(){
    cin >> S >> P >> str;

    for(int i = 0; i < 4; i++){
        cin >> v[i];    
    }
    
    int i = 0;
    vector<int> count(4);
    int r = 1;
    string pw = str.substr(0, P);
    for(char c : pw){
      if(c == 'A'){
        count[0]++;
      } else if(c == 'C'){
        count[1]++;
      } else if(c == 'G'){
        count[2]++;
      } else if(c == 'T'){
        count[3]++;
      }
    }

    for(int i = 0; i < 4; i++){
      if(count[i] < v[i]){
          r = 0;
          break;
      }
    }
    if(r == 1) rst++;

    for(int i = 1; i < S - P + 1; i++){
      r = 1;

      if(str[i-1] == 'A'){
        count[0]--;
      } else if(str[i-1] == 'C'){
        count[1]--;
      } else if(str[i-1] == 'G'){
        count[2]--;
      } else if(str[i-1] == 'T'){
        count[3]--;
      }

      if(str[i+P-1] == 'A'){
        count[0]++;
      } else if(str[i+P-1] == 'C'){
        count[1]++;
      } else if(str[i+P-1] == 'G'){
        count[2]++;
      } else if(str[i+P-1] == 'T'){
        count[3]++;
      }

      for(int i = 0; i < 4; i++){
        if(count[i] < v[i]){
            r = 0;
            break;
        }
      }
      if(r == 1) rst++;
    }
    
    cout << rst << '\n';
    
    return 0;
}