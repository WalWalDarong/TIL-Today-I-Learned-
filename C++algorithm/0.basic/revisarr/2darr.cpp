#include <bits/stdc++.h>
using namespace std;

//vector
vector<vector<int>> v;
vector<vector<int>> v2(10, vector<int> (10, 0));
vector<int> v3[10];

void go(vector<vector<int>> &v){
  v[0][0] = 100;
}

void go2(vector<vector<int>> &v) {
  v[0][0] = 100;
}

void go3(vector<int> v[10]){
  v[0][0] = 100;
}

//array
int a[3][3] = {{1,2,3}, {1,2,3}, {1,2,3}};
void goa(int a[][3]){
  a[2][2] = 100;
}
void goa2(int a[3][3]){
  a[2][2] = 1000;
}


int main() {
  //2차원 배열 수정하기 - vector
  vector<int> temp;
  temp.push_back(0);
  
  v.push_back(temp);

  v3[0].push_back(0);

  cout << v[0][0] << " : " << v2[0][0] << " : " << v3[0][0] << '\n';
  
  go(v); go2(v2); go3(v3);
  cout << v[0][0] << " : " << v2[0][0] << " : " << v3[0][0] << '\n';

  /*
  0 : 0 : 0
  100 : 100 : 100
  */

  //2차원 배열 수정하기 - vector
  goa(a); cout << a[2][2] << '\n';
  goa2(a); cout << a[2][2] << '\n';
  /*
  100
  1000
  */
  
  return 0;
}