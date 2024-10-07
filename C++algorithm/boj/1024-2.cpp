#include <bits/stdc++.h>
using namespace std;
int N, L;
int main(){
    cin >> N >> L;

    // 이진탐색
    
    // 시작값은 N / L;
    // 100번까지 시도
    // start, end
    // 작으면 start = mid + 1
    // 크면 end = mid - 1
    // mid = (start + end) / 2
    
    // 시작값 start = 0;
    // end = N / L;
    
    int strt = 0;
    int end = N / L;

    
    while(true){
        int mid = (strt + end) / 2;
        int sm = 0;
        vector<int> v;
        for(int i = mid; i <= N; i++){
          sm += i;
          v.push_back(i);
          int l = v.size();
          cout << "strt " << strt << "end " << end << "mid " << mid << '\n';
          
          if(sm < N && l > 100){
              strt = mid + 1;
              break;
          }
          
          if(sm > N){
              cout << "sm > N" << '\n';
              end = mid - 1;
              break;
          }
          
          if(sm == N && v.size() >= L){
              for(int k : v){
                  cout << k << ' ';
              }
              return 0;
          }
          
          if(i == N){
              strt = mid + 1;
          }
        }
        
        if(strt > end){
            cout << -1;
            return 0;
        }
    }
    
    return 0;
}