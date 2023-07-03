//18장 그래프
class Vertex {
  constructor(value) {
    this.value = value;
    this.neighbors = [];
  }

  addNeighbor(vertex) {
    this.neighbors.push(vertex);
    vertex.neighbors.push(this);
  }
}

const alice = new Vertex('Alice');
const bob = new Vertex('Bob');
const candy = new Vertex('Candy');
const derek = new Vertex('Derek');
const elaine = new Vertex('Elaine');
const fred = new Vertex('Fred');
const gina = new Vertex('Gina');
const helen = new Vertex('Helen');
const irena = new Vertex('Irena');

alice.addNeighbor(bob);
alice.addNeighbor(candy);
alice.addNeighbor(derek);
alice.addNeighbor(elaine);
bob.addNeighbor(fred);
fred.addNeighbor(helen);
helen.addNeighbor(candy);
derek.addNeighbor(gina);
derek.addNeighbor(elaine);
gina.addNeighbor(irena);

//dfs - 깊이 우선 탐색
function dfs(vertex, searchValue, visitedVertices = {}) {
  let currentVertex = vertex;
  let result;
  if (searchValue == currentVertex.value) {
    return currentVertex;
  } else {
    if (!visitedVertices[currentVertex.value]) {
      visitedVertices[currentVertex.value] = true;
      if (currentVertex.neighbors.length > 0) {
        for (const neighbor of currentVertex.neighbors) {
          if (searchValue == neighbor.value) {
            return neighbor;
          } else {
            result = dfs(neighbor, searchValue, visitedVertices);
            if (result) {
              return result;
            }
          }
        }
      } else {
        return;
      }
    }
  }
}

//console.log(dfs(alice, 'Helen'));

//4. bfs - 너비 우선 탐색
function bfs(startingVertex, searchValue) {
  let queue = [];
  let visitedVertices = {};
  visitedVertices[startingVertex.value] = true;
  queue.push(startingVertex);

  while (queue.length > 0) {
    let currentVertex = queue[0];
    queue = queue.slice(1);

    if (currentVertex.value == searchValue) {
      return currentVertex;
    } else if (currentVertex.neighbors.length > 0) {
      for (const neighbor of currentVertex.neighbors) {
        if (!visitedVertices[neighbor.value]) {
          visitedVertices[neighbor.value] = true;
          queue.push(neighbor);
        }
      }
    }
  }
}

//console.log('결과: ', bfs(alice, 'Helen'));

const idris = new Vertex('Idris');
const kamil = new Vertex('Kamil');
const lina = new Vertex('Lina');
const sasha = new Vertex('Sasha');
const marco = new Vertex('Marco');
const ken = new Vertex('Ken');
const talia = new Vertex('Talia');

idris.addNeighbor(kamil);
idris.addNeighbor(talia);
kamil.addNeighbor(lina);
lina.addNeighbor(sasha);
sasha.addNeighbor(marco);
marco.addNeighbor(ken);
ken.addNeighbor(talia);

//5. 사람 간 최단 거리 경로 (정답 자바스크립트로 바꾸기)
// function shortestPath(startPerson, destPerson){
//   let shortestPath = {}
//   let shortestStopover = {}
//   let unvisited = []
//   let visited = {}

//   shortestPath[startPerson.value] = 0;

//   let current = start;

//   while(current){
//     visited[current.value] = true
//     unvisited = unvisited.filter((vertex)=> vertex.value != current.value)

//     for(const neighbor of current.neighbors){
//       if(!visited[neighbor.value]){
//         unvisited.push(neighbor.value)

//         distance = shortestPath[neighbor.value] +
//       }
//     }
//   }
// }

//19장
//1. O(N^2), 2. O(N) 4. O(N), O(N), O(N)/ O(N), O(1), O(N)

//3. 공간복잡도 O(1) 배열 역순 함수
function reverse(arr) {
  for (let i = 0; i < arr.length / 2; i++) {
    let tmp = arr[arr.length - (i + 1)];
    arr[arr.length - (i + 1)] = arr[i];
    arr[i] = tmp;
  }

  return arr;
}

//console.log(reverse([1, 2, 3, 4, 5, 6]));

// console.log(['q', 'we', 'g', 'a', 'd', 'n'].sort());
// console.log([122, 1556, 1, 3, 6, 2, 7, 9].sort((a, b) => (a < b ? -1 : 1)));
