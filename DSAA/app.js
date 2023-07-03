//O(logN)
function search(array, value) {
  let lowerBound = 0;
  let upperBound = array.length - 1;

  while (lowerBound <= upperBound) {
    midPoint = Math.round((lowerBound + upperBound) / 2);
    let midValue = array[midPoint];

    if (value == midValue) {
      return midPoint;
    } else if (value < midValue) {
      upperBound = midPoint - 1;
    } else if (value > midValue) {
      lowerBound = midPoint + 1;
    }
  }

  return false;
}

//console.log(search([3, 17, 75, 80, 202], 99));

//O(N)
function isPrime(number) {
  for (let i = 2; i < number; i++) {
    if (number % i === 0) {
      return false;
    }
    return true;
  }
}
//console.log(isPrime(117))

//O(1)
function isLeapYear(year) {
  return year % 100 === 0 ? year % 400 === 0 : year % 4 === 0;
}
//console.log(isLeapYear(2500))

//O(N)
function sum(array) {
  let sum = 0;
  for (let i = 0; i < array.length; i++) {
    sum += array[i];
  }
  return sum;
}
//console.log(sum([1,2,3,4,5,6,10]))

//O(logN)
function chessboardSpace(numberOfGrains) {
  let chessboardSpace = 1;
  let placedGrains = 1;

  while (placedGrains < numberOfGrains) {
    placedGrains *= 2;
    chessboardSpace++;
  }

  return chessboardSpace;
}
//console.log(chessboardSpace(8))

//O(N)
function selectAStrings(arr) {
  let newArr = [];

  for (let i = 0; i < arr.length; i++) {
    if (arr[i].startsWith('a')) {
      newArr.push(arr[i]);
    }
  }
  return newArr;
}

//O(1)
function median(arr) {
  const middle = Math.floor(arr.length / 2);

  if (arr.length % 2 == 0) {
    return (arr[middle - 1] + arr[middle]) / 2;
  } else {
    return arr[middle];
  }
}

//console.log(median([1,2,3,4,5,6]))

//버블정렬
//O(N^2)
function bubbleSort(arr) {
  let sorted = false;
  let unsortedLen = arr.length - 1;
  while (sorted === false) {
    sorted = true;
    for (let i = 0; i < unsortedLen; i++) {
      if (arr[i] > arr[i + 1]) {
        console.log('index: ', i);
        let tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
        sorted = false;
        console.log('for문 내: ', arr);
      }
    }
    unsortedLen -= 1;
  }

  return arr;
}

//console.log(bubbleSort([65,55,45,35,25,15,10]))

//O(N)
function hasDuplicateValue(arr) {
  let existingNumbers = [];
  for (let i = 0; i < arr.length; i++) {
    if (existingNumbers[arr[i]] === 1) {
      return true;
    } else {
      existingNumbers[arr[i]] = 1;
    }
  }
  return false;
}

//console.log(hasDuplicateValue([1,4,5,2,9]))

//O(N)
function greatestNumber(arr) {
  let greatestNumber = arr[0];
  //    for(let i = 0; i < arr.length; i++){
  //     if(greatestNumber < arr[i]){
  //         greatestNumber = arr[i]
  //     }

  //     }
  arr.map((data) => {
    if (data > greatestNumber) {
      greatestNumber = data;
    }
  });
  return greatestNumber;
}

//console.log(greatestNumber([1,2,3,4,5,6,7,102,101]))

//선택정렬
//O(N^2)
function selectionSort(arr) {
  for (let i = 0; i < arr.length - 1; i++) {
    let lowestIndex = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[lowestIndex]) {
        lowestIndex = j;
      }
    }

    if (lowestIndex != i) {
      let tmp = arr[i];
      arr[i] = arr[lowestIndex];
      arr[lowestIndex] = tmp;
    }
  }
  return arr;
}

//console.log(selectionSort([4,2,7,1,3]))

//2N O(N)
function doubleThenSum(arr) {
  let doubledArr = arr.map((data) => data * 2);
  let sum = 0;
  doubledArr.forEach((data) => {
    sum += data;
  });

  return sum;
}
//console.log(doubleThenSum([1,2]))

//삽입정렬
//O(N^2)
function insertionSort(arr) {
  for (let i = 1; i < arr.length; i++) {
    let tmp = arr[i];
    let position = i - 1;

    while (position >= 0) {
      if (tmp < arr[position]) {
        arr[position + 1] = arr[position];
        position = position - 1;
      } else {
        break;
      }
    }
    arr[position + 1] = tmp;
  }
  return arr;
}

//console.log(insertionSort([4,2,7,1,3]))

//교집합 찾기
//O(N^2)
function intersection(firstArr, secondArr) {
  let result = [];

  for (let i = 0; i < firstArr.length; i++) {
    for (let j = 0; j < secondArr.length; j++) {
      if (firstArr[i] === secondArr[j]) {
        result.push(firstArr[i]);
        break;
      }
    }
  }

  return result;
}

//console.log(intersection([1,2,3,4], [1,2,6,7,0]))

//string에서 "X" 찾는 함수 최적화
function containsX(string) {
  for (let i = 0; i < string.length; i++) {
    console.log('i: ', i);
    if (string[i] === 'X') {
      return true;
    }
  }
  return false;
}

//console.log(containsX("Xsldkfjsdf"))

//7장 연습문제: N, N, N*M, N^3, logN(밑수가 2라는 걸 기억하자!)

//사막에서 바늘 찾기
function findNeedle(needle, haystack) {
  let needleIndex = 0;
  let haystackIndex = 0;

  while (haystackIndex < haystack.length) {
    if (needle[needleIndex] == haystack[haystackIndex]) {
      let foundNeedle = true;

      while (needleIndex < needle.length) {
        if (needle[needleIndex] !== haystack[haystackIndex + needleIndex]) {
          foundNeedle = false;
          break;
        }
        needleIndex++;
      }

      if (foundNeedle == true) {
        return true;
      }
    }

    haystackIndex++;
    needleIndex = 0;
  }
  return false;
}

//console.log("사막에서 바늘찾기: ", findNeedle("defdf", "lsdkjfaadefdfddlaks"))

//부분집합 확인
function isSubset(arr1, arr2) {
  let smallArr;
  let largeArr;
  let hashTable = {};

  if (arr1.length <= arr2.length) {
    smallArr = arr1;
    largeArr = arr2;
  } else {
    smallArr = arr2;
    largeArr = arr1;
  }

  for (const value of largeArr) {
    hashTable[value] = true;
  }

  for (const value of smallArr) {
    if (!hashTable[value]) return false;
  }

  return true;
}

//console.log(isSubset(["a","c","d"], ["b","d", "f", "c"]))

//교집합 반환 함수
function intersectionArr(arr1, arr2) {
  let hashTable = {};
  let intersection = [];

  for (const value of arr1) {
    hashTable[value] = true;
  }

  for (const value of arr2) {
    if (hashTable[value]) {
      intersection.push(value);
    }
  }

  return intersection;
}

//console.log(intersectionArr([1,2,3,4,5],[0,2,4,6,8]))

//첫번째 중복값 찾기
function duplicateArr(arr) {
  let hashTable = {};

  for (const value of arr) {
    if (hashTable[value]) {
      return value;
    }
    hashTable[value] = true;
  }
  return;
}

//console.log(duplicateArr(["a", "b", "c", "d", "e", "f", "c"]))

//빠진 알파벳 찾기
function missingAlphabet(str) {
  let hashTable = {};
  let alphabet;

  //string에도 for(const value of string){} 문법 적용 가능
  for (const value of str) {
    if (!hashTable[value]) hashTable[value] = true;
  }

  //let alphabet = "abcdefghijklmnopqrstuvwxyz"
  for (let i = 97; i < 123; i++) {
    alphabet = String.fromCharCode(i);
    if (!hashTable[alphabet]) {
      return alphabet;
    }
  }

  return;
}

//console.log(missingAlphabet("the quick brown box jumps over a lazy dog"))

//중복되지 않은 알파벳 찾기
function firstNonDuplicate(str) {
  let hashTable = {};

  for (const value of str) {
    if (!hashTable[value]) {
      hashTable[value] = 1;
    } else {
      hashTable[value] = 2;
      //hashTable[value]++;
    }
  }

  for (const value of str) {
    if (hashTable[value] == 1) {
      return value;
    }
  }
}

//console.log(firstNonDuplicate("minimum"))

//괄호 여닫기 오류 확인
function linter(str) {
  let openingBracket = [];
  let popped;
  const bracketPair = {
    ')': '(',
    '}': '{',
    ']': '[',
  };

  for (const value of str) {
    if (value == '(' || value == '{' || value == '[') {
      openingBracket.push(value);
    }

    if (value == ')' || value == '}' || value == ']') {
      popped = openingBracket.pop();

      //오류 1. 짝이 맞지 않은 괄호
      if (popped != bracketPair[value]) {
        return `${value} has mismatched opening brace`;
      }
      //오류 2. 여는 괄호가 없음
      if (!popped) {
        `${value} doesn't have opening brace`;
      }
    }
  }

  //오류 3. 닫히는 괄호가 없음
  if (openingBracket.length > 0) {
    return `${openingBracket} does not have closing brace`;
  }
  return `good`;
}

//console.log(linter("(var x = {y: [1,2,3]})"))

//9장 1. 큐, 2. 6,5 3. 1,2
//문자열을 거꾸로 만드는 함수
function revertString(str) {
  let popped;
  //split() 인자로 '' 넣어줘야 함 주의
  const strArr = str.split('');
  let revertedArr = [];
  for (let i = 0; i < str.length; i++) {
    popped = strArr.pop();
    revertedArr.push(popped);
  }

  //join() 인자로 '' 넣어줘야 함 주의
  return revertedArr.join('');
}

//console.log(revertString("abcde"))

//재귀 - countdown
function countdown(num) {
  if (num >= 0) {
    console.log(num);
    countdown(num - 1);
  }
}

//countdown(10)

//재귀 - factorial(계승)
function factorial(num) {
  if (num > 1) {
    return num * factorial(num - 1);
  } else {
    return 1;
  }
}

//console.log(factorial(2))

//console.log(factorial(2))

//재귀는 임의의 단계만큼 깊이 들어가야 할 때 유용하다
//10장 1. 기저조건: if(low<high) 2. 무한으로 음수값이 계속 곱해진다. 3. if(high == low) return low 4,
//재귀 - low부터 high까지 합 출력
function sum(low, high) {
  if (low == high) {
    return low;
  } else {
    return high + sum(low, high - 1);
  }
}

//console.log(sum(9,10))

//재귀 - 배열 내 숫자만 출력
function printNumber(arr) {
  arr.forEach((value) => {
    if (typeof value == 'number') {
      console.log(value);
    } else if (typeof value == 'object') {
      printNumber(value);
    } else {
      return;
    }
  });
}

//printNumber([1,2,3,[4,5,6],7,[8,[9,10,11,[12,13,14]]], [15,16,17,18,19,[20,21,22,[23,24,25,[26,27,29]],30,31],32],33])

//재귀 - 배열 제자리 수정
function doubleArr(arr, index = 0) {
  if (index < arr.length) {
    arr[index] *= 2;
    doubleArr(arr, index + 1);
  }

  return arr;
}

//console.log(doubleArr([1,2,3,4]))

//재귀 - 하위 문제의 계산 결과에 기반해 계산할 수 있을 때 유용

//재귀 - 배열의 합
function sumArray(arr) {
  if (arr.length == 1) {
    return arr[0];
  }
  return arr[0] + sumArray(arr.slice(1));
}

//console.log(sumArray([1,2,3,4,5,6]))

//재귀 - 문자열 뒤집기
//*string에서도 [0]과 같은 인덱스 호출과 slice()가 가능함!! */
function reverseString(str) {
  if (str.length == 1) return str[0];
  return reverseString(str.slice(1)) + str[0];
}

//console.log(reverseString("abcdefffdsa"))

//array.slice(1,0)이나, 요소 하나의 배열.slice(1)은 빈배열을 반환한다.
function countX(str) {
  if (str.length == 0) return 0;

  if (str[0] == 'x') {
    return 1 + countX(str.slice(1));
  } else {
    return countX(str.slice(1));
  }
}

//console.log(countX("aldkjfslxasldkjfxalkdjfx"))

//재귀 - 애너그램
function anagram(str) {
  let collection = [];

  if (str.length == 1) return [str[0]];

  anagram(str.slice(1)).forEach((data) => {
    for (let i = 0; i < data.length + 1; i++) {
      const newString = data.slice(0, i) + str[0] + data.slice(i);
      collection.push(newString);
    }
  });

  return collection;
}

//console.log(anagram("abcd"))

//11장 재귀 연습문제
//1. 배열 내 문자열 문자 개수의 합
function countStrInArr(arr) {
  if (arr.length == 0) return 0;
  return arr[0].length + countStrInArr(arr.slice(1));
}

//console.log(countStrInArr(["ab", "c", "def","ghij"]))

//2. 수 배열 내 짝수만 포함하는 새 배열
function selectEven(arr) {
  if (arr.length == 0) return [];

  if (arr[0] % 2 == 0) {
    let collection = selectEven(arr.slice(1));
    collection.push(arr[0]);
    return collection;
  } else {
    return selectEven(arr.slice(1));
  }
}

//console.log(selectEven([2,3,4,5,6,7,8,10,11]))

//3. 삼각수 (triangular numbers)
function triangularNumber(n) {
  if (n > 0) {
    return n + triangularNumber(n - 1);
  }
  return 0;
}

//console.log(triangularNumber(7))

//4. string.indexOf('x') 함수
function findXPosition(str) {
  if (str.length == 0) return;

  if (str[0] == 'x') {
    return 0;
  } else {
    return findXPosition(str.slice(1)) + 1;
  }
}

//console.log(findXPosition('abcdefghijklmnopqrstuvwxyzxxxx'))

//(별표)5. 유일 경로 (unique paths)
function uniquePaths(s, f) {
  if (s == 1 || f == 1) {
    return 1;
  }

  return uniquePaths(s, f - 1) + uniquePaths(s - 1, f);
}

//console.log(uniquePaths(3,7))

//12장 피보나치 수열 fibonacci sequence - 메모이제이션 memoization
function fib(n, memo = {}) {
  if (!memo[n]) {
    if (n == 0 || n == 1) {
      memo[n] = n;
    } else {
      memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    }
  }

  return memo[n];
}

//console.log(fib(10))

//피보나치 수열 - 상향식
function fib2(n) {
  let a = 0;
  let b = 1;
  let tmp;

  if (n == 0) {
    return 0;
  } else {
    for (let i = 1; i < n; i++) {
      console.log('for문 안 i: ', i);
      tmp = a;
      a = b;
      b = tmp + a;
    }
  }
  return b;
}

//console.log(fib2(2))

//12장
//1. memoization (오답)
function addUntil100(arr, memo = {}) {
  if (arr.length == 1) {
    memo[arr] = arr[0];
  } else {
    if (!memo[arr.slice(1)]) {
      memo[arr.slice(1)] = addUntil100(arr.slice(1), memo);
    }

    if (arr[0] + memo[arr.slice(1)] > 100) {
      memo[arr] = memo[arr.slice(1)];
    } else {
      memo[arr] = arr[0] + memo[arr.slice(1)];
    }
  }
  return memo[arr];
}

//console.log(addUntil100([2, 3, 3, 90]))

//1. memoization (정답)

function addUntil1002(arr, memo = {}) {
  if (arr.length == 1) {
    return arr[0];
  } else {
    let beforeValue = addUntil1002(arr.slice(1), memo);

    if (arr[0] + beforeValue > 100) {
      return beforeValue;
    } else {
      return arr[0] + beforeValue;
    }
  }
}

// console.log(addUntil1002([2, 3, 5, 90]))

//2. 골롬 수열 Golomb Sequence (내 답)
function golomb(n, memo = {}) {
  if (n == 1) {
    memo[n] = 1;
  } else {
    if (!memo[n - 1]) {
      memo[n - 1] = golomb(n - 1, memo);
    }

    memo[n] = 1 + golomb(n - golomb(memo[n - 1]));
    return memo[n];
  }

  return memo[n];
}

// console.log(golomb(6))

//2. 골롬 수열 Golomb Sequence (정답)
function golomb2(n, memo = {}) {
  if (n == 1) {
    memo[n] = 1;
  } else {
    if (!memo[n]) {
      memo[n] = 1 + golomb(n - golomb(golomb(n - 1, memo), memo), memo);
    }
  }

  return memo[n];
}

// console.log(golomb2(6))

//3. 유일 경로 효율성 개선 (내 답)
function uniquePaths2(r, c, memo = {}) {
  if (r == 1 || c == 1) {
    memo[`(${r},${c})`] = 1;
  } else {
    if (!memo[`(${r - 1},${c})`]) {
      memo[`(${r - 1},${c})`] = uniquePaths2(r - 1, c, memo);
    }

    if (!memo[`(${r},${c - 1})`]) {
      memo[`(${r},${c - 1})`] = uniquePaths2(r, c - 1, memo);
    }

    memo[`(${r},${c})`] = memo[`(${r - 1},${c})`] + memo[`(${r},${c - 1})`];
  }

  return memo[`(${r},${c})`];
}

//console.log(uniquePaths2(3,6))

//3. 유일 경로 효율성 개선 (정답)
function uniquePaths3(r, c, memo = {}) {
  if (r == 1 || c == 1) {
    memo[[r, c]] = 1;
  } else {
    if (!memo[[r, c]]) {
      memo[[r, c]] =
        uniquePaths3(r - 1, c, memo) + uniquePaths3(r, c - 1, memo);
    }
  }

  return memo[[r, c]];
}

//console.log(uniquePaths3(3,7))

//13장
//퀵 정렬 활용
function hasDuplicateValue2(arr) {
  //자바스크립트에서 숫자를 '알파벳'순이 아닌 크기순으로 정렬하려면 아래 인자를 넣어야 한다.
  arr.sort((a, b) => (a < b ? -1 : 1));

  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i] == arr[i + 1]) {
      return true;
    }
  }

  return false;
}

//console.log(hasDuplicateValue2([3,1,6,2]))

//1. 배열 세 수의 가장 큰 곱 O(NlogN)
function biggestMultiple(arr) {
  arr.sort((a, b) => (a < b ? -1 : 1));
  if (arr.length > 2) {
    return arr[arr.length - 1] * arr[arr.length - 2] * arr[arr.length - 3];
  } else {
    let result = 1;
    arr.forEach((data) => {
      result *= data;
    });
    return result;
  }
}

//console.log(biggestMultiple([9,11,10,2,5,6,20]))

//2. 빠진 숫자 찾기 O(NlogN)
function findMissingNum(arr) {
  arr.sort((a, b) => (a < b ? -1 : 1));

  for (let i = 0; i < arr.length - 1; i++) {
    if (arr[i] + 1 !== arr[i + 1]) {
      return arr[i] + 1;
    }
  }
}

//console.log(findMissingNum([0,1,2,3,4,5,6,7,9]))

//3. 가장 큰 수 찾는 함수 3개
//O(N)
function findBiggestNum(arr) {
  let max = arr[0];
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

//console.log(findBiggestNum([20,5,2,6,7,80,8,11,16,21]))

//O(NlogN)
function findBiggestNum2(arr) {
  arr.sort((a, b) => (a < b ? -1 : 1));
  return arr.pop();
}

//console.log(findBiggestNum2([20,5,2,6,7,8,11,16, 21,40]))

//O(N)
function findBiggestNum3(arr) {
  if (arr.length == 1) {
    max = arr[0];
  } else {
    let beforeBiggest = findBiggestNum(arr.slice(1));
    if (arr[0] > beforeBiggest) {
      max = arr[0];
    } else {
      max = beforeBiggest;
    }
  }
  return max;
}

//console.log(findBiggestNum3([20,5,2,6,7,8,11,16,22]))

//O(N^2)
function findBiggestNum4(arr) {
  for (let i = 0; i < arr.length; i++) {
    isMax = true;
    for (let j = 0; j < arr.length; j++) {
      if (arr[j] > arr[i]) {
        isMax = false;
      }
    }

    if (isMax) {
      return arr[i];
    }
  }
}

//console.log(findBiggestNum4([1,2,990,3,6,1,2,100,101,9,11]))
