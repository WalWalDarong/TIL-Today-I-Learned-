// 시간초과
#include <bits/stdc++.h>
using namespace std;
int S;
int P;
string str;
vector<int> v(4);
int result = 0;
int main(){
    cin >> S >> P >> str;

    for(int i = 0; i < 4; i++){
        cin >> v[i];    
    }
    
    int i = 0;
    for(int i = 0; i < S - P + 1; i++){
        string pw = str.substr(i, P);
        cout << "pw: " << pw << '\n';
        vector<int> count(4);
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
        
        int r = 1;

        for(int i = 0; i < 4; i++){
            if(count[i] < v[i]){
                r = 0;
                break;
            }
        }

        if(r == 1) result++;
    }
    
    cout << result << '\n';
    
    return 0;
}