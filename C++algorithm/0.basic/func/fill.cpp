#include <bits/stdc++.h>
using namespace std;

int main() {
  //배열 초기화
  //fill(시작 값 first, 끝 값 last, 초기화하는 값 val): 모든 값으로 초기화 가능 O(n)
  //void fill(ForwardIterator first, ForwardIterator last, const T& val);
  //[first, last)

  int a[10];
  int b[10][10];
  fill(&a[0], &a[10], 100);
  for(int i = 0; i < 10; i++){
    cout << a[i] << ' ';
  }

  cout << '\n';
  fill(&b[0][0], &b[9][10], 2);
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      cout << b[i][j] << " ";
    }
    cout << '\n';
  }

  /*
  100 100 100 100 100 100 100 100 100 100 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  2 2 2 2 2 2 2 2 2 2 
  */

  fill(a, a + 10, 200);
  for(int i = 0; i < 10; i++){
    cout << a[i] << ' ';
  } 

  //2차원 이상은 & 사용, 배열 이름으로 fill사용 불가

  cout << '\n';
  fill(&b[0][0], &b[0][0] + 10*10, 3);
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      cout << b[i][j] << " ";
    }
    cout << '\n';
  }

  /*
  200 200 200 200 200 200 200 200 200 200 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  3 3 3 3 3 3 3 3 3 3 
  */

  //memset(배열의 이름, k, 배열의 크기): 바이트 단위로 초기화, 0, -1, char형 하나로만 초기화 가능
  //memset이 fill보다 빠르다
  //void * memset (void *ptr, int value, size_t num);
  const int max_n = 1004;
  int aa[max_n];
  int aa2[max_n][max_n];
  char aa3[max_n];
  memset(aa, -1, sizeof(aa));
  memset(aa2, 0, sizeof(aa2));
  memset(aa3, 'a', sizeof(aa3));
  for(int i = 0; i < 10; i++) cout << aa[i] << " ";
  cout << '\n';
  for(int i = 0; i < 10; i++) cout << *aa2[i] << " ";
  cout << '\n';
  for(int i = 0; i < 10; i++) cout << aa3[i] << " ";

  /*
  -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 
  0 0 0 0 0 0 0 0 0 0 
  a a a a a a a a a a
  */


  return 0;
}