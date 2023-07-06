#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock
{
private: //public에 있는 함수들을 통해서만 값을 변경할 수 있음, 데이터 은닉
  string name;
  int shares;
  float share_val;
  double total_val; //float보다 넓은 범위의 실수
  void set_total() {total_val = shares * share_val;}

public: //private을 변경하는 다리 역할
  // void acquire(string, int ,float);
  void buy(int, float);
  void sell(int, float);
  void update(float);
  void show();
  Stock &topval(Stock&);
  Stock(string, int ,float);
  Stock();
  ~Stock();
};

#endif // !STOCK