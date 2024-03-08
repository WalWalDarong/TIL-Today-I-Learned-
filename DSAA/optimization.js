//19장. 최적화

const basketballPlayers = [
  {
    firstName: 'Jill',
    lastName: 'Huang',
    team: 'Gators',
  },
  {
    firstName: 'Janko',
    lastName: 'Barton',
    team: 'Sharks',
  },
  {
    firstName: 'Wanda',
    lastName: 'Vakulskas',
    team: 'Sharks',
  },
  {
    firstName: 'Jill',
    lastName: 'Moloney',
    team: 'Gators',
  },
  {
    firstName: 'Luuk',
    lastName: 'Watkins',
    team: 'Gators',
  },
];

const footballPlayers = [
  {
    firstName: 'Hanzla',
    lastName: 'Radosti',
    team: '32ers',
  },
  {
    firstName: 'Tina',
    lastName: 'Watkins',
    team: 'Barleycorns',
  },
  {
    firstName: 'Alex',
    lastName: 'Patel',
    team: '32ers',
  },
  {
    firstName: 'Jill',
    lastName: 'Huang',
    team: 'Barleycorns',
  },
  {
    firstName: 'Wanda',
    lastName: 'Vakulskas',
    team: 'Barleycorns',
  },
];

//1. 중복 찾기 O(N)
function doublePlayer(basketball, football) {
  let basketObj = {};
  let answer = [];
  for (const player of basketball) {
    basketObj[player.firstName + ' ' + player.lastName] = true;
  }

  for (const player of football) {
    if (basketObj[`${player.firstName} ${player.lastName}`]) {
      answer.push(player.firstName + ' ' + player.lastName);
    }
  }
  return answer;
}

//console.log(doublePlayer(basketballPlayers, footballPlayers));

//2. 빠진 정수 찾기 O(N)
//정답: 원래 N까지의 총합과 실제 총합의 차이가 빠진 숫자다.
function findMissingNum(arr) {
  let obj = {};
  for (const num of arr) {
    obj[num] = true;
  }

  for (const num of arr) {
    if (num != arr.length) {
      if (!obj[num + 1]) {
        return num + 1;
      }
    }
  }
  return;
}

//console.log(findMissingNum([8, 2, 3, 9, 4, 7, 0, 5, 6]));

//3. 주식 최대 마진 매수 매도 O(N)
//정답:
//  1. 최소 구매 금액은 나올 때마다 바꾼다
//  2. 하나 씩 돌아가며 (본인 가격 - 최소 구매 가격)을 확인하고 그게 MaxProfit보다 크면 MaxProfit을 업데이트 한다.
function stockTrade(arr) {
  let maxProfit = 0;
  let buy = { value: arr[0], i: 0 };
  let sell = { value: arr[0], i: 0 };

  //buy.i가 sell.i 보다 크면 초기화
  //sell.i가 buy.i 보다 크면 업데이트
  arr.forEach((data, i) => {
    //매수
    if (sell.value - data < buy.value && i < sell.i) {
      maxProfit = sell.value - data;
    }

    //매도
    if (data - buy.value > maxProfit && i > buy.i) {
      maxProfit = data - buy.value;
    }

    //새로운 매수 시점
    if (data < buy.value) {
      buy.value = data;
    }
  });

  return maxProfit;
}

//console.log(stockTrade([10, 7, 5, 8, 11, 2, 12]));

//4. 최대 곱 (음수 포함) O(N)
function maxMultiple(arr) {
  let negativeMax = 0;
  let negativeSecond = 0;
  let positiveMax = 0;
  let positiveSecond = 0;

  for (const num of arr) {
    if (num < 0 && num < negativeMax) {
      tmp = negativeMax;
      negativeMax = num;
      negativeSecond = tmp;
    } else if (num < 0 && num < negativeSecond) {
      negativeSecond = num;
    }

    if (num > 0 && num > positiveMax) {
      tmp = positiveMax;
      positiveMax = num;
      positiveSecond = tmp;
    } else if (num > 0 && num > positiveSecond) {
      positiveSecond = num;
    }
  }

  if (negativeMax * negativeSecond > positiveMax * positiveSecond) {
    return negativeMax * negativeSecond;
  } else {
    return positiveMax * positiveSecond;
  }
}

//console.log(maxMultiple([5, -10, -6, 90, 4, -110]));

//5. 체온 정렬 O(N)
function bodyTemp(arr) {
  //20가지의 수가 나올 수 있다.
  // 97.0 <= num <= 99.0
  //hashtable에 넣고 숫자 개수 ++
  let numObj = {};
  let answer = [];

  for (const num of arr) {
    if (!numObj[num]) {
      numObj[num] = 1;
    } else {
      numObj[num]++;
    }
  }

  for (let i = 0; i < 21; i++) {
    let temp = 97 + i * 0.1;

    if (numObj[temp]) {
      for (let i = 0; i < numObj[temp]; i++) {
        answer.push(temp);
      }
    }
  }
  return answer;
}

//console.log(bodyTemp([98.6, 98.0, 97.1, 99.0, 97.8, 98.5, 98.2, 98.0, 97.1]));

//6. 가장 긴 연속 숫자 순열 O(N)
function longestSequence(arr) {
  let numObj = {};
  let maxLen = 0;
  for (const num of arr) {
    if (!numObj[num]) {
      numObj[num] = true;
    }
  }

  for (const num of arr) {
    if (!numObj[num - 1]) {
      let currentNum = num;
      let sqncLen = 0;
      while (numObj[currentNum]) {
        sqncLen++;
        currentNum++;
      }
      if (sqncLen > maxLen) {
        maxLen = sqncLen;
      }
    }
  }

  return maxLen;
}

// console.log(longestSequence([10, 5, 12, 3, 55, 30, 4, 11, 2]));
// console.log(longestSequence([19, 13, 15, 12, 1, 8, 14, 17, 11]));
