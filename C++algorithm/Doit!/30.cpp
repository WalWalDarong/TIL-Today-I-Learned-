#include <bits/stdc++.h>
using namespace std;
int N, M;
vector<int> v;
int main(){
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    
    int sum = accumulate(v.begin(), v.end(), 0);
    int l = *max_element(v.begin(), v.end());
    int r = sum;

    while(l <= r){ // 이 부분이 핵심
        int sum = 0;
        int count = 1;
        int mid = (l + r)/2;
        for(int i : v){
            if(sum + i > mid){
                sum = 0;
                count++;
            }
            sum = sum + i;
        }
        if(count > M){
          l = mid + 1;

        } else {
          r = mid - 1;
        }
    }
    
    cout << l << '\n';
    return 0;
}