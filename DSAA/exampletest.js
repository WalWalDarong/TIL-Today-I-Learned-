//1. 함수 구현
function solution(arr) {
  let map = new Map();

  arr.forEach((data) => {
    if (!map.has(data)) {
      map.set(data, 1);
    } else {
      let num = map.get(data);
      map.set(data, num + 1);
    }
  });

  let answer = [];

  for (const [k, v] of map) {
    if (v > 1) {
      answer.push(v);
    }
  }

  if (answer.length < 1) {
    answer.push(-1);
  }

  return answer;
}

// console.log(solution([1, 2, 3, 3, 3, 3, 4, 4]));
// console.log(solution([3, 2, 4, 4, 2, 5, 2, 5, 5]));
// console.log(solution([3, 5, 7, 9, 1]));

//2. 타입별 메모리 크기
function memSolution(arr) {
  let answer = '';
  const map = new Map();
  map.set('BOOL', '#');
  map.set('SHORT', '##');
  map.set('FLOAT', '####');
  map.set('INT', '########');
  map.set('LONG', '################');

  //8바이트 단위로 ,로 구분
  //BOOL 이후 SHORT, FLOAT 연속되면 .(1바이트)
  //최대 128바이트
  //꽉차면 HALT 리턴

  arr.forEach((type, i) => {
    //(8 - ,뒤에 개수)만큼 패딩
    let rest = answer.length % 8;
    if (map.get(type).length > 7) {
      if (answer.length % 8 !== 0) {
        for (let j = 0; j < 8 - rest; j++) {
          answer += '.';
        }
      }
    } else if (map.get(type).length == 4) {
      if (arr[i - 1] == 'BOOL') {
        for (let j = 0; j < 4 - rest; j++) {
          answer += '.';
        }
      }
    } else if (map.get(type).length == 2) {
      if (arr[i - 1] == 'BOOL') {
        answer += '.';
      }
    }
    answer += map.get(type);
  });

  if (answer.length > 128) return 'HALT';

  if (answer.length % 8 != 0) {
    let rest = answer.length % 8;
    for (let j = 0; j < 8 - rest; j++) {
      answer += '.';
    }
  }

  let len = answer.length;

  let result = [];
  for (let i = 0; i < len; i += 8) {
    result.push(answer.slice(i, i + 8));
  }

  answer = result.join(',');
  //마지막에 , 붙이기
  return answer;
}

// console.log(memSolution(['INT', 'INT', 'BOOL', 'SHORT', 'LONG']));
// console.log(memSolution(['INT', 'SHORT', 'FLOAT', 'INT', 'BOOL']));
// console.log(memSolution(['FLOAT', 'SHORT', 'BOOL', 'BOOL', 'BOOL', 'INT']));
// console.log(
//   memSolution([
//     'BOOL',
//     'LONG',
//     'SHORT',
//     'LONG',
//     'BOOL',
//     'LONG',
//     'BOOL',
//     'LONG',
//     'SHORT',
//     'LONG',
//     'LONG',
//   ])
// );

//1v. (5), 2v. (1), 3v. (5), 4v. (1),(3),(4) 5v. (2),
//6v. (1), 7v. (2),(4),(5), 8. , 10v. (1),(2),(3),(4)
//(year%4 !== 0 || year % 400 !== 0) && year%100 == 0)
//2차원 배열 공부
