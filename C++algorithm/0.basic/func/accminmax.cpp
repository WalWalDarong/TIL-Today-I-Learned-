#include <bits/stdc++.h>
using namespace std;

int main() {
  //accumulate(시작점, 끝점, 초기값): 배열의 합 구하기
  vector<int> v = {1,2,3,4,5,6,7,8,9,10};
  int sum = accumulate(v.begin(), v.end(), 0);
  cout << sum << '\n';//
  sum = accumulate(v.begin(), v.end(), 100);
  cout << sum << '\n'; //155

  //max_element(), min_element(): 이터레이터 반환, *로 값 활용
  int a = *max_element(v.begin(), v.end());
  auto b = max_element(v.begin(), v.end());
  cout << a << '\n'; //10
  cout << (int)(b - v.begin()) << '\n'; //9

  int c = *min_element(v.begin(), v.end()); //1
  auto d = min_element(v.begin(), v.end()); //0

  cout << c << '\n';
  cout << (int)(d - v.begin()) << '\n';
  cout << typeid(d).name() << '\n'; //NSt3__111__wrap_iterIPiEE

  //max_element()의 implement
  /*
  template <class ForwardIterator>
    ForwardIterator max_element (ForwardIterator first, ForwardIterator last)
    {
      if(first == last) return last;
      ForwardIterator largest = first;

      while (++first != last){
        if(*largest<*first) largest = first;
      return largest;
      }
    }
  
  */

  return 0;
}