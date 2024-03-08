#include "stock.h"

//사용 범위 결정 연산자 ::
// void Stock::acquire(string co, int n, float pr){
//   name = co;
//   shares = n;
//   share_val = pr;
//   set_total();
// };
//생성자로 대체
void Stock::buy(int n, float pr){
  shares += n;
  share_val = pr;
  set_total();
};
void Stock::sell(int n, float pr){
  shares -= n;
  share_val = pr;
  set_total();
};
void Stock::update(float pr){
  share_val = pr;
  set_total();
};
void Stock::show(){
  cout <<"회사명: " << name << endl;
  cout <<"주식 수: " << shares <<endl; 
  cout << "주가: " << share_val << endl;
  cout << "주식 총 가치: " << total_val << endl;
};

Stock &Stock::topval(Stock& s){
  if(s.share_val > share_val)
    return s;
  return *this; //this는 pointer
};

//생성자
Stock::Stock(string co, int n, float pr){
  name = co;
  shares = n;
  share_val = pr;
  set_total();
};

//오버로딩
Stock::Stock(){
  name = "";
  shares = 0;
  share_val = 0;
  set_total();
};

//파괴자 tilde~
//매개변수를 가질 수 없음
//빈값으로 코딩될 수 있음, 코드 내부에서 호출할 수 없음
//생성자로 재설정될 때, 프로그램이 종료될 때 호출하지 않아도 자동으로 호출되어 파괴됨
Stock::~Stock(){};
