// (왼쪽 끝 + 오른쪽 끝) / 2
#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> a, b;
int main(){
    cin >> N;
    for(int i =0; i < N; i++){
      int tmp;
      cin >> tmp;
      a.push_back(tmp);
    }
    
    sort(a.begin(), a.end());
    
    cin >> M;
    for(int i =0; i < M; i++){
      int tmp;
      cin >> tmp;
      b.push_back(tmp);
    }
    
    
    for(int i : b){
        int half = N/2;
        int base = N/2;
        bool ret = false;
        if(a[0] == i) {
          cout << 1 << '\n';
          continue;
        }
        if(a[N - 1] == i) {
          cout << 1 << '\n';
          continue;
        }
        while (true){
            if(a[base] == i){
                cout << 1 << '\n';
                ret = true;
                break;
            } else if(a[base] < i){
                if(half == 0) break;
                half = half/2;
                base = base + half;
            } else {
                if(half == 0) break;
                half = half/2;
                base = base - half;
            }


        }
        if(!ret) cout << 0 << '\n';
    }
    
    return 0;
}