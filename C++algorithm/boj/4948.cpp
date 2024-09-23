#include <bits/stdc++.h>
using namespace std;

int main(){
    while(true){
        int N;
        cin >> N;
        if(N == 0) return 0;
        vector<int> A(2 * N+1);
        for(int i = 0; i <= 2 * N; i++){
            A[i] = i;
        }
        
        A[1] = 0;
        
        for(int i = 2; i <= N; i++){
            for(int j = 2; j <= 2 * N/i; j++){
                if(A[i * j] != 0){
                    A[i * j] = 0;                    
                }
            }
        }
        
        int cnt = 0;
        for(int i = N; i <= 2 * N; i++){
            if(A[i] != 0){
                cnt++;
            }
        }
        cout << cnt <<'\n';
    }
}
