#include <iostream>

using namespace std;

int main(){
  //구조체: 다른 데이터형이 허용되는 데이터의 집합

  //축구선수
  struct MyStruct 
  {
    string name; //멤버, 구성 요소
    string position;
    int height;
    int weight;
  } B;

  //구조체를 변수의 데이터형으로 사용할 수 있음

  // MyStruct A;
  // A.name = "Son";
  // A.position = "Striker";
  // A.height = 183;
  // A.weight = 77;

  MyStruct A = {
    "Son",
    "Striker",
    183,
    77
  };

  cout << A.name << endl;
  cout << A.position << endl;
  cout << A.height << endl;
  cout << A.weight << endl;

  //빈 값은 0으로 저장됨 (안 되네??)
  // B = {};

  // cout << B.height << endl;

  //구조체 배열
  MyStruct Arr[2] = {
    { "A", "A", 1, 1},
    { "B", "B", 2, 2}
  };

  cout << Arr[0].name << endl;
  cout << Arr[1].name << endl;


  return 0;
}