# TIL-Today-I-Learned-
## Week 1 HTML/CSS Assignment #2
사이트에 이미지를 넣는 방법은 두 가지가 있습니다.   
<img> 태그를 사용하는 것과 <div> 태그에 background-image 속성을 추가하는 것. 두 가지 방법의 차이점과 각각 어떠한 경우에 사용하면 좋은지 설명해보세요.

✅ 위의 질문에 대답할 수 있나요? 실제 면접에서 자주 다루는 질문입니다. 이를 설명하기 위해서는 Semantic Web과 Semantic Tag에 대한 이해가 있어야 합니다.   
✅ Semantic Web과 Semantic Tag에 대한 학습은 각자 구글링을 통해 학습하시고, 해당 주제로 블로그에 글을 작성해 보세요. 위의 면접 질문에 대한 답변과 연결시켜 작성해보시면 좋겠습니다.   

<img> 태그의 장단점:   
- 장: img 태그는 semantic tag이므로 개발자 혹은 컴퓨터가 html 파일을 읽을 때 가독성이 높고, 이해하기 쉬워 유지보수에 효율적이다.
검색엔진이 크롤링 할 때 의미 파악이 용기하기 때문에 데이터 베이스 구축에도 도움이 된다.
- 단: 속성을 많이 지정할 시 가독성이 떨어지며 유지보수 할 때도 불편하다

<div> 태그 background-image 장단점:
- 장: 속성 부여가 편하고 유지보수에 용이하다
- semantic tag가 아니기 때문에 html 파일 자체의 가독성이 낮다. 

## [🚀 Check Point] 23. 레이아웃의 모든 것
  
 그리고 블로그를 작성해야 합니다. 블로그를 작성할 때는 아래 사이트, replit 뿐만 아니라 youtube, 다른 좋은 블로그 등 여러 자료를 참고하고 작성해주시면 됩니다. 각자 편한 블로그 채널(티스토리, velog, medium 등)에 포스팅을 아래의 주제로 작성해 주세요.

1. position 속성 - relative, absolute, fixed

  
  
2. inline, inline-block, block 에 대해서

# HTML
## Head
### DOCTYPE
DOCTYPE은 Document Type의 약자로, HTML 문서의 타입을 나타내는 선언문입니다. 이 선언문은 HTML 문서의 첫 부분에 위치하며, 웹 브라우저에게 해당 문서가 어떤 HTML 버전으로 작성되었는지 알려주는 역할을 합니다.

예를 들어, HTML5로 작성된 문서라면 다음과 같이 DOCTYPE을 선언합니다.

```html
<!DOCTYPE html>
```
이것은 HTML5 문서임을 나타내며, 이전 버전의 HTML과의 호환성을 고려하여 DOCTYPE을 선언하고 싶다면 다음과 같이 작성할 수 있습니다.

```html
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
   "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
```
이것은 XHTML 1.0 Transitional 문서임을 나타냅니다. DOCTYPE을 올바르게 선언하지 않으면 웹 브라우저가 문서를 올바르게 해석하지 못하거나 호환성 문제가 발생할 수 있습니다.

### title
HTML에서 <title> 태그는 웹 페이지의 제목을 정의하는 역할을 합니다. 이 태그는 <head> 태그 안에 위치하며, 웹 브라우저의 탭에 표시되는 페이지의 제목이 됩니다. 또한 검색 엔진에서 페이지의 제목으로 사용되기도 합니다.

예를 들어, 다음과 같은 코드를 작성하면 웹 페이지의 제목이 "Hello World"로 설정됩니다.

```html
<!DOCTYPE html>
<html>
  <head>
    <title>Hello World</title>
  </head>
  <body>
    <h1>Hello World!</h1>
    <p>Welcome to my website.</p>
  </body>
</html>
```
  이렇게 작성된 코드는 브라우저의 탭에 "Hello World"라는 제목이 표시되며, 검색 엔진에서도 페이지의 제목으로 사용됩니다.
  
###  meta charset="UTF-8" 태그
  HTML에서 charset은 문서의 문자 인코딩 방식을 지정하는 속성입니다. 문자 인코딩 방식은 문자나 문자열을 컴퓨터에서 처리하기 위해 부호화하는 방식을 의미하며, 다양한 문자 인코딩 방식이 존재합니다. charset 속성은 <meta> 태그를 사용하여 설정합니다.

예를 들어, UTF-8 인코딩 방식을 사용하려면 다음과 같이 <meta> 태그를 <head> 태그 내에 추가합니다.

```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="UTF-8">
    <title>My Web Page</title>
  </head>
  <body>
    <!-- 웹 페이지의 내용 -->
  </body>
</html>
  ```
여기서 UTF-8은 유니코드 문자 인코딩 방식 중 하나로, 전 세계의 대부분의 문자를 지원합니다. 이 방식은 현재 가장 널리 사용되는 문자 인코딩 방식 중 하나입니다.

따라서, charset 속성을 올바르게 설정하지 않으면 브라우저에서 문자가 깨져 나타날 수 있습니다. UTF-8은 전 세계의 다양한 언어와 문자를 지원하므로 대부분의 경우 올바른 선택입니다.
  
### html lang="en" 태그
  HTML에서 <html lang="en">은 문서의 언어를 지정하는 역할을 합니다. lang 속성은 HTML 태그에 적용될 수 있는 일반적인 속성이며, 문서의 언어를 지정할 때 사용됩니다.

lang 속성의 값으로는 ISO 639-1 코드를 사용하며, 해당 코드는 문서의 언어를 식별하는 데 사용됩니다. en은 영어를 의미하는 코드이며, 다른 언어의 코드도 사용할 수 있습니다.

웹 페이지에서 lang 속성을 사용하면 스크린 리더와 같은 보조 기술을 사용하는 사용자들이 문서의 언어를 인식하고, 적절한 발음과 액세스 가능한 텍스트 출력을 위해 그에 맞는 처리를 할 수 있습니다.

따라서, 다음과 같이 <html> 태그에 lang 속성을 추가하여 문서의 언어를 지정하는 것이 좋습니다.

```html
<!DOCTYPE html>
<html lang="en">
  <head>
    <meta charset="UTF-8">
    <title>My Web Page</title>
  </head>
  <body>
    <!-- 웹 페이지의 내용 -->
  </body>
</html>
  ```
위의 코드에서는 문서의 언어로 영어(en)를 사용하도록 설정하였습니다.
  
  
## Tag의 류종류  
### a 태그
  HTML에서 <a> 태그는 하이퍼링크를 생성하는 태그입니다. <a> 태그는 "anchor"의 약자로, 웹 페이지에서 다른 페이지나 같은 페이지 내의 특정 위치로 이동할 수 있는 링크를 생성할 수 있습니다.

<a> 태그는 href 속성을 사용하여 링크의 대상 URL을 지정합니다. 이때, href 속성은 반드시 지정해야 하는 필수 속성입니다.

```html
<a href="https://www.example.com">이동하기</a>
  ```
위의 예시에서는 <a> 태그로 감싸인 "이동하기"라는 텍스트를 클릭하면 https://www.example.com으로 이동하게 됩니다.

또한, <a> 태그는 텍스트 말고 이미지나 다른 요소도 링크 대상으로 사용할 수 있습니다.

```html
<a href="https://www.example.com">
  <img src="image.jpg" alt="이미지 링크">
</a>
  ```
위의 예시에서는 <a> 태그 안에 <img> 태그가 포함되어 있으며, 클릭 시 https://www.example.com으로 이동하게 됩니다. 이때, <img> 태그의 alt 속성은 이미지가 로드되지 못했을 때 대체할 텍스트를 지정하는 속성입니다.

<a> 태그는 다양한 속성과 함께 사용할 수 있으며, 자바스크립트 등을 사용하여 클릭 이벤트 등을 추가할 수도 있습니다.

  ### a태그의 target 속성
  HTML에서 <a> 태그의 target 속성은 링크가 열리는 위치를 지정하는 속성입니다. 이 속성을 사용하여 링크를 클릭했을 때 새 탭, 새 창 또는 현재 창과 같은 다른 창으로 이동할 수 있습니다.

target 속성에는 다음과 같은 값을 사용할 수 있습니다.

_self: 현재 창에서 링크가 열립니다. 이 값은 기본값입니다.
_blank: 새로운 탭 또는 창에서 링크가 열립니다.
_parent: 현재 창의 부모 프레임에서 링크가 열립니다.
_top: 현재 창의 가장 상위 레벨에서 링크가 열립니다.
```html
<a href="https://www.example.com" target="_blank">새 창에서 열기</a>
```
  위의 예시에서는 <a> 태그의 target 속성을 _blank로 설정하여 링크를 새 탭 또는 새 창에서 열리도록 지정하였습니다.

target 속성은 보안상의 이유로 브라우저에서 막히기도 합니다. 그러므로, 새 창이나 탭에서 열리는 것을 요구하는 경우 사용자가 직접 이를 선택할 수 있는 UI를 제공하는 것이 좋습니다.
  ### img 태그의 alt 속성
이러한 alt 속성은 사용자가 느린 네트워크 환경이나 src 속성값의 오류, 시각 장애인용 스크린 리더의 사용 등 어떤 이유로든 사용자가 이미지를 볼 수 없을 때 이미지 대신 제공할 대체 정보를 제공합니다.
