#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> ret;
int main(){
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for(int i = 0; i < n; i++){
        if(i == n-1) ret.push_back(-1);
        for(int j = i + 1; j < n; j++){

            if(arr[j] > arr[i]){
                ret.push_back(arr[j]);
                break;
            } else {
              if(j == n - 1){
                ret.push_back(-1);
              }
            }
        }
    }
    
    for(int i : ret) cout << i << '\n';
    
    return 0;
}