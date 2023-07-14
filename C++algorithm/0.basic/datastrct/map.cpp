#include <bits/stdc++.h>
using namespace std;

map<string, int> mp;
string a[] = {"주홍철", "양영주", "박종선"};

int main() {
  //map: 삽입할 때마다 자동 정렬
  /*
  1. 하나의 키에 중복된 값이 들어갈 수 없다.
  2. 오름차순 정렬 - 넣은 순서대로 map 탐색하는 것이 아니라, 아스키코드 순으로 탐색
  3. 대괄호 연산자[]로 키 직접 참조
  */
  for(int i = 0; i < 3; i++){
    mp.insert({a[i], i + 1}); //insert({key, value})
    mp[a[i]] = i + 1;
  }

  cout << mp["walwal"] <<'\n'; //0

  mp["walwal"] = 4;
  cout << mp.size() << '\n'; //4, size(): 요소 개수
  mp.erase("walwal");

  auto it = mp.find("walwal");

  if(it == mp.end()){
    cout << "못 찾겠다\n";
  } //못 찾겠다

  mp["walwal"] = 100;

  it = mp.find("walwal");

  if( it != mp.end()){
    cout << (*it).first << " : " << (*it).second << '\n';
  } //walwal : 100

  for(auto it : mp) {
    cout << (it).first << " : " << (it).second << '\n'; //first = key, second = value
  }
  /*
  walwal : 100
  박종선 : 3
  양영주 : 2
  주홍철 : 1
  */

  for(auto it = mp.begin(); it != mp.end(); it++) {//이터레이터 순환
    cout << (*it).first << " : " << (*it).second << '\n'; 
  }
  /*
  walwal : 100
  박종선 : 3
  양영주 : 2
  주홍철 : 1
  */

  mp.clear(); //clear(): map 요소 모두 제거

  //map 사용 시 주의 점
  //해당 key를 참조만 해도 맵에 요소가 생성된다. 0 또는 빈 문자열로 초기화된다.

  //맵에 요소가 있는지 확인하고 할당하는 로직
  map<int, int> mpp;
  if(mpp[1] == 0){
    mpp[1] = 2; //안 해주면 1 : 0
  }

  for(auto i : mpp) cout << i.first << " " << i.second <<'\n'; //1 2

  //0이 들어있을 수도 있을 때
  if(mpp.find(2) == mpp.end()){
    mpp[2] = 2;
  }

  for(auto i : mpp) cout << i.first << " " << i.second <<'\n';
  /*
  1 2
  2 2
  */

  //unordered_map이라는 타입도 있으나, 거의 쓸 일이 없다
  unordered_map<string, int> umap;
  umap["bcd"] = 1;
  umap["aaa"] = 1;
  umap["abb"] = 1;
  for(auto it : umap) {
    cout << it.first << " : " << it.second << '\n';
  }
  /*
  abb : 1
  aaa : 1
  bcd : 1
  */

  return 0;
}