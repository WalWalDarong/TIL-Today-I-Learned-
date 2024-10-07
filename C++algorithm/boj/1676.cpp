#include <bits/stdc++.h>
using namespace std;
int N;
int main(){
    cin >> N;
    
    if(N == 0){
        cout << 1 << '\n';
        return 0;
    }
    
    int tCnt = 0;
    int fCnt = 0;
    for(int i = 1; i <= N; i++){
        int k = i;
        while(true){
            if(k % 2 == 0){
                tCnt++;
                k /= 2;
            }

            if(k % 5 == 0){
                fCnt++;
                k /= 5;
            }

            if(k % 2 != 0 && k % 5 != 0){
                break;
            }
        }
    }
    
    cout << fCnt << '\n';
    
    return 0;
}