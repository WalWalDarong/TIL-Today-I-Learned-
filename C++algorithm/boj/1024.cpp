#include <bits/stdc++.h>
using namespace std;
int N, L;
int main(){
    cin >> N >> L;
    
    for(int i = N / L; i >= 0; i--){
        int sm = 0;
        int l = 0;
        vector<int> V;
        for(int j = i; j <= N; j++){
            sm += j;
            l++;
            V.push_back(j);
            if(sm == N && l >= L){
                for(int k : V){
                    cout << k << ' ';
                }
                return 0;
            }
            if(l > 100){
                cout << -1;
                return 0;
            }
            if(sm > N){
                break;
            }
        }
    }
    
    cout << -1;
    return 0;
}