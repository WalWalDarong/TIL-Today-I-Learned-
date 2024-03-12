#include <bits/stdc++.h>
using namespace std;
int N;
bool isPrime(int i){
    if(i == 2) return true;
    
    for(int j = 3; j <= i / 2; j += 2){
        if(i % j == 0){
            return false;
        }
    }
    
    return true; 
};

void DFS(int i, int jrs){
    if(jrs == N){
        cout << i << '\n';
        return;
    }
    
    for(int j = 1; j < 10; j++){
        if(isPrime(i * 10 + j)){
            DFS(i * 10 + j, jrs + 1);
        }
    }
};

int main(){
    cin >> N;
    
    DFS(2, 1);
    DFS(3, 1);
    DFS(5, 1);
    DFS(7, 1);
    
    return 0;
}