#include <iostream>
#ifndef TIMEH
#define TIMEH

using namespace std;

class Time
{
private:
  int hours;
  int mins;

public:
  Time();
  Time(int, int);
  void addHours(int);
  void addMins(int);
  Time operator+(Time&);
  Time operator*(int);
  void show();
  ~Time();
  friend Time operator*(int n , Time& t) {
    return t * n;
  }; //friend 함수는 멤버 함수는 아니지만, 동등한 접근 권한을 가짐
};

#endif