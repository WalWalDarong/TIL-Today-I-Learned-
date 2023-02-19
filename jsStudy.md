# TIL-Today-I-Learned-
## 헷갈리는 개념
### 함수 선언식 vs 함수 표현식
: 함수 선언식은 hoisting 되지만, 표현식은 안됨

- 표현식: 
var 함수 이름 = function () { return}

- 화살표 함수:
 전통적인 함수표현(function)의 간편한 대안. 하지만, 화살표 함수는 몇 가지 제한점이 있고 모든 상황에 사용할 수는 없음.
     // 매개변수가 하나뿐인 경우 괄호는 선택사항:
    (singleParam) => { statements }
    singleParam => { statements }

    // 매개변수가 없는 함수는 괄호가 필요:
    () => { statements }

Object의 property는 순서가 없음
출력될 때 순서 바뀌어서 나옴
Index도 없음
