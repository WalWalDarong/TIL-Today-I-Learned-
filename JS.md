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

### 배열
* 배열에서 뭐가 안된다고 하면 대부분 for문
* 현업에서는 for문을 거의 안 씀
* 배열 method 사용, 함수형 프로그래밍 e.g., array.filter VS array.map
* map, for일치?, 같은 걸 많이 씀
=> 배열이 어렵고 헷갈림 

* 사망 연산자? '?'
> a === 1-? //a는 10'입니다' : a는 10이 아닙니다

#### for문 VS While문
for문과 while문은 둘 다 자바스크립트에서 반복문을 구현하는 데 사용됩니다. 하지만 두 반복문의 구문과 사용 방법에는 차이가 있습니다.

for문은 초기식, 조건식, 증감식으로 구성된 반복문입니다. for문은 일반적으로 반복 횟수를 알고 있을 때 사용합니다. 초기식은 반복문이 시작되기 전에 한 번 실행되며, 조건식은 매 반복마다 평가됩니다. 조건식이 true이면, 반복문이 실행되고 증감식이 실행됩니다. 그 후, 조건식이 다시 평가됩니다. 조건식이 false이면, 반복문이 종료됩니다.

예시:
```javascript
javascript
Copy code
for (var i = 0; i < 10; i++) {
  console.log(i);
}
```
위 예시에서 for문은 i가 0부터 시작하며, i가 10보다 작을 때까지 실행됩니다. i가 한 번 실행될 때마다, i의 값을 출력하고, i를 1씩 증가시킵니다. for문은 총 10번 반복되고, 0부터 9까지의 값을 출력합니다.

while문은 조건식으로만 구성된 반복문입니다. while문은 일반적으로 반복 횟수를 모를 때 사용합니다. 조건식이 true이면, 반복문이 실행됩니다. 반복문이 실행될 때마다, 조건식이 다시 평가됩니다. 조건식이 false이면, 반복문이 종료됩니다.

예시:
```javascript
javascript
Copy code
var i = 0;

while (i < 10) {
  console.log(i);
  i++;
}
```
위 예시에서 while문은 i가 10보다 작을 때까지 실행됩니다. i가 한 번 실행될 때마다, i의 값을 출력하고, i를 1씩 증가시킵니다. while문은 총 10번 반복되고, 0부터 9까지의 값을 출력합니다.

따라서, for문은 일반적으로 반복 횟수를 알고 있을 때, while문은 일반적으로 반복 횟수를 모를 때 사용합니다.

### var, const, let의 차이
* var
 var는 ES5 이전에 사용되던 변수 선언 키워드입니다.
 함수 스코프(function scope)를 가집니다. 즉, 변수가 선언된 함수 내에서만 유효합니다.
 var로 선언된 변수는 선언하기 전에도 사용할 수 있습니다. (호이스팅(hoisting) 특성)
* let
 ES6에서 도입된 변수 선언 키워드입니다.
 블록 스코프(block scope)를 가집니다. 즉, 변수가 선언된 블록(중괄호 {}) 내에서만 유효합니다.
 let으로 선언된 변수는 선언하기 전에는 사용할 수 없습니다.
* const
 ES6에서 도입된 변수 선언 키워드입니다.
 블록 스코프(block scope)를 가집니다.
 const로 선언된 변수는 값을 변경할 수 없습니다. 상수(constant)와 같은 역할을 합니다.
 const로 선언된 객체나 배열은 값을 변경할 수 있지만, 객체나 배열 자체를 다른 객체나 배열로 재할당할 수 없습니다.
> 따라서, 변수의 값이 변하지 않는 경우 const를 사용하고, 값이 변하는 변수는 let을 사용하는 것이 좋습니다. var는 호이스팅 특성 때문에 혼란을 일으킬 수 있으므로, let과 const를 사용하는 것이 권장됩니다.
