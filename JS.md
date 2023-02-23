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


### object
#### dot notation VS bracket notation
: dot notation은 key를 string으로 인식, 변수(variable)로 설정한 key는 dot notation으로 사용 불가
> variable에 key 할당하는 건 bracket notation으로만 사용 가능   
> bracket 안에 변수는 ''없이, key는 '' 있이 사용

### Function
*  인수에 순서가 있으니, 그걸 해결하려면 function 안에서 object 사용
* function({key1: value1, key2: value2, key3:value3})
* Return = 반환과 동시에 "종료"

* 변수명 줄임말 쓰지 말기 코드가 복잡한데 줄임말까지 쓰면 협업하기 힘듦
