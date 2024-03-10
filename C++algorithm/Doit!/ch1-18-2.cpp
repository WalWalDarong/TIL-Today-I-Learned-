#include <bits/stdc++.h>
using namespace std;
int n;
int a[1004];
int main(){
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    
    for(int i = 1; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            if(a[i] < a[j]){
                int now = a[i];
                for(int k = i; k > j; k--){
                    a[k] = a[k - 1];
                }
                a[j] = now;
                break;
            }
        }
    }

    int suma[n];
    suma[0] = a[0];
    for(int i = 1; i < n; i++){
      suma[i] = suma[i - 1] + a[i];
    }
    
    cout << accumulate(suma, suma+n, 0) << '\n';
    
    return 0;
}