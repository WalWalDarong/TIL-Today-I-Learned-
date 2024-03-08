# TIL-Today-I-Learned-
//문제1
```
const arr = [100, 200, 300]

arr.pop()
arr.pop()
arr.push(150, 250, 500)

console.log(arr)
```
//문제2
```
const arr = [1, 3, 4, 6, 9]
const newArr = []
  
for (let i in arr) {

  newArr.unshift(arr[i])
}
  
console.log(newArr)  
```
//문제3
```
const arr = [2, 3, 4, 5, 6, 7, 8, 9]

for (let i in arr) {
  console.log (`${arr[i]}단`)
  for (let j in arr) {
  console.log(`${arr[i]} * ${arr[j]} = ${arr[i]*arr[j]}`)
  }
}
```

//문제4
```
const numbers = "10 11 5 6 12 7 3 9"
const numArr = numbers.split(" ")
const newArr = []

for (let i in numArr) {
  newArr.push(numArr[i]-0)
}

function findMax(arr) {
  let max = 0
  for (let i in arr) {
  if (arr[i] >= max) {
    max = newArr[i]
  }}
  return max
}

console.log(findMax(newArr))
```

//문제5
```
function func(words) {
  const newArr =[]
  for (let i in words) {

    if (newArr.indexOf(words[i]) === -1) {
      newArr.push(words[i])
    }
  } 
  return newArr
}

const words = ['Have', 'A', 'Good', 'Time', 'Have', 'Good']
console.log(func(words))
```
