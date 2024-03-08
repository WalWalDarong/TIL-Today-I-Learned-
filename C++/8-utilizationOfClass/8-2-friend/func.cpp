#include "time.h"

Time::Time() {
  hours = mins = 0;
};

Time::Time(int h, int m){
  hours = h;
  mins = m;
};

void Time::addHours(int h) {
  hours += h;
};

void Time::addMins(int m) {
  mins += m;
  hours += mins / 60;
  mins %= 60;
};

Time Time::operator+(Time& t){
  Time sum;
  sum.mins = mins + t.mins;
  sum.hours = hours + t.hours;
  sum.hours += sum.mins / 60;
  sum.mins %= 60;
  return sum;
};

void Time::show(){
  std::cout << "시간: " << hours << std::endl;
  std::cout << "분: " << mins << std::endl;
};

Time::~Time(){};

//friend 함수를 정의할 때는 friend라는 키워드 사용 안 함
// Time operator*(int n, Time& t){
//   Time result;
//   long resultMin = t.hours * n * 60 + t.mins * n;
//   result.hours = resultMin / 60;
//   result.mins = resultMin % 60;
//   return result;
// }

Time Time::operator*(int n){
  Time result;
  long resultMin = hours * n * 60 + mins * n;
  result.hours = resultMin / 60;
  result.mins = resultMin % 60;
  return result;
}