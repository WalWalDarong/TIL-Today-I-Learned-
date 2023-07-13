#include <iostream>

using namespace std;

const int SIZE = 8;

// int sumArr(int[], int);
//int sumArr(int*, int);
int sumArr(int*, int*);

int main() {
  int arr[SIZE] = {1,2,4,8,16, 32, 64, 128};
  cout << "size of arr " << sizeof arr << endl; //32
  // int sum = sumArr(arr, SIZE);
  int sum = sumArr(arr, arr + SIZE);
  //arr == &arr[0]
  
  cout << "함수의 총합은 " << sum << "입니다.\n";

  sum = sumArr(arr, arr + 3);

  cout << "함수의 " << "세번째 인덱스까지의 합은 " << sum << "입니다.\n";
  return 0; 
}

//int* arr || int arr[]
/*
int sumArr(int arr[], int n) {
  int total = 0;

  for(int i = 0; i < n; i++)
    total += arr[i];

  return total;
}
*/

/*
int sumArr(int* arr, int n){
  cout << "size of arr " << sizeof arr << endl; //8, 배열 첫번째 요소의 크기 (OS마다 4 또는 8 다름)
  int total = 0;

  for(int i = 0; i < n; i++)
    total += arr[i];
  
  return total;
}
*/

int sumArr(int* begin, int* end) {
  int total = 0;
  int* pt;
  for(pt = begin; pt != end; pt++)
    total += *pt;
  
  return total;
}
