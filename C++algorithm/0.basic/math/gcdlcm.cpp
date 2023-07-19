#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(a == 0) return b;
  return gcd(b % a, a);  
}

int lcm(int a, int b){
  return (a * b)/gcd(a, b);
}

int main(){
  //최대 공약수 greatest common divisor
  cout << gcd(3, 7) << " " << gcd(24, 8) << "\n"; // 1 8

  //최소 공배수 least common multiple
  cout << lcm(3, 7) << " " << lcm(24, 8) << " " << lcm(10, 12) << "\n"; //21 24 60

  return 0;
  
}