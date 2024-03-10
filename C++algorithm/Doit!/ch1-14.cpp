#include <bits/stdc++.h>
using namespace std;
int n;
deque<int> dq;
stack<int> stk;
int main() {
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        
        if(x == 0){
            if(dq.empty()) {
                cout << 0 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else {
            if(dq.empty()) {
                dq.push_front(x);
            } else {
                if(abs(x)< abs(dq.front())){
                    dq.push_front(x);
                } else if(abs(x) == abs(dq.front())) {
                    if(x <= dq.front()) {
                        dq.push_front(x);
                    } else {
                        stk.push(dq.front());
                        dq.pop_front();
                        dq.push_front(x);
                        dq.push_front(stk.top());
                    }
                    
               } else {
                    while(abs(x) > abs(dq.front())){
                        stk.push(dq.front());
                        dq.pop_front();
                        if(dq.empty()) break;
                    }
                         
                   if(abs(x) == abs(dq.front())) {
                      if(x <= dq.front()) {
                        dq.push_front(x);
                      } else {
                        stk.push(dq.front());
                        dq.pop_front();
                        dq.push_front(x);
                      }
                   } else {
                        dq.push_front(x);
                   }
                   while(!stk.size()){
                       dq.push_front(stk.top());
                       stk.pop();
                   }
        
               }
            }
        }
    }
    
    return 0;
}