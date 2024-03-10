// 시간 초과, 시간 단축 문제
#include <bits/stdc++.h>
using namespace std;
bool change = false;
int N;
int A[1000004];
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
int main(){
    cin >> N;
    for(int i = 1; i < N + 1; i++){
        cin >> A[i];
    }
    
    for(int i = 1; i <= N + 1; i++){
        change = false;
        for(int j = 1; j <= N-1;j++){
            if(A[j] > A[j+1]){
                change = true;
                swap(A[j], A[j+1]);
            }
        }
        if(change == false){
            cout << i << '\n';
            break;
        }
    }
    
    return 0;
}