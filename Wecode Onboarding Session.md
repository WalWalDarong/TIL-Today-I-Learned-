### Week 1 - HTML/CSS
### Replit Assignment

### Week2-개발자 도구
F12   
패널   
Elements HRML&CSS   
Console   
Java Script 적용할 수 있음   
: 프론트엔드 개발자들이 가장 많이 사용 하는 곳   
- console로 바로 웹페이지에서 구현해 볼 수 있음
- console.log("test")
- 혹시 console.log로 데이터 출력해보셨나요?
- java script 연습할 수 있음
   
3. Network   
: front & back이 같이 보는 곳

- XHR - status code: 200 ok = back - front 통신이 잘 됐다
-- 400번대는 front 쪽 문제, 500번대는 server 쪽에서 문제가 있어서 통신이 잘 안 될 때
<주로 그렇다는 거지 반드시 그런 건 아님. 서로 사이좋게 지내라
- 위쪽은 속도: 늦게 들어온 것들 왜 늦게 들어왔는지 최적화도 확인할 수 있음

   
4. Application
브라우저가 가진 저장소
: 저장소를 어떻게 사용할지는 기업마다 방식이 다름   
   
Local storage: 삭제 안됨
- 자동 로그인
- 보안 이슈로 local storage에 민감한 정보는 넣으면 안됨, 해킹당할 수 있음
   
Session sotrage: browser 끄면 삭제됨
- 최근 본 상품 리스트
   
cookies : 시간 set 해두면 삭제됨
- 오늘 하루 보지 않기 클릭 팝업창
   
# OS - Linux
### 파일 구조
- Directory라고 부름
- 무조건 Root부터 시작, 최상위 공간, / 기호로 접근
- home은 user의 공간이다, ~ 기호로 접근
- bin: Binary 기본 명령어들 들어 있음

-- 절대 경로 vs 상대 경로
- 상대경로: .현재 경로, .. 상위경

리눅스는 모든 걸 파일로 함
앞에 .이 붙은 dot 파일을 설정 파일이라고 함. 숨김 파일로 간주됨.   

- 환경 변수 env   
: OS가 변수를 다 저장해둔 곳   
사용자가 지정도 가능   
dot 파일 .env라고 부름   
민감하고 공유하면 안되는 값들 환경변수로 활

(Window 랑 Linux는 커널이 다름
Git Bash 다운로드 받아서 사용해야 함
Mac이나 Ubuntu가 필요함)

pwd: 내 위치 알려주는 명령
ls
ls -a
cd
mkdir: make directory
touch: 파일 생성
vi: 파일 편집
- i: insert
- :wq 저장하고 나가기
- :w 저장
- :q 나가기 :q! 저장 안 하고 나가기 
rm: 파일 remove 지우기
rm -r: 디렉토리 삭제
(rm -rf* 하지 말 것 f=force 강제로 오류 무시하고 진행, directory 내에 전부 다 지우게 됨)

Mac book: iterm 2 터미널 설치 > 설정할 거 거의 없음, 기본 터미널도 있긴 함
* 프로그래머스 레벨 1 정도로 할 수 있어야 언어 익숙해졌다 할 수 있
