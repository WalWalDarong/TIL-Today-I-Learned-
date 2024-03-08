//14장 Linked List

class LinkedList {
  constructor(firstNode = null) {
    this.firstNode = firstNode;
  }

  //1. 모든 원소 출력
  readAll() {
    let currentNode = this.firstNode;
    while (currentNode) {
      console.log(currentNode.data);
      currentNode = currentNode.nextNode;
    }
  }

  //3. 마지막 원소 출력
  readLast() {
    let currentNode = this.firstNode;
    while (currentNode.nextNode) {
      currentNode = currentNode.nextNode;
    }
    return currentNode.data;
  }

  //4. 리스트 뒤집기 (못 풀음) > (정답)
  reverseList() {
    let currentNode = this.firstNode;
    let previousNode = null;
    let nextNode;
    //계속해서 마지막 노드를 새로운 리스트로 만들기?
    while (currentNode) {
      nextNode = currentNode.nextNode;

      currentNode.nextNode = previousNode;

      previousNode = currentNode;
      currentNode = nextNode;
    }

    this.firstNode = previousNode;
  }
}

class Node {
  constructor(data, nextNode = null) {
    this.data = data;
    this.nextNode = nextNode;
  }
}

class DoublyLinkedList {
  constructor(firstNode = null, lastNode = null) {
    this.firstNode = firstNode;
    this.lastNode = lastNode;
  }

  //2. 모든 원소 거꾸로 출력
  readBackwards() {
    let currentNode = this.lastNode;
    while (currentNode) {
      console.log(currentNode.data);
      currentNode = currentNode.previousNode;
    }
  }
}

class DoubleNode {
  constructor(data, previousNode = null, nextNode = null) {
    this.data = data;
    this.previousNode = previousNode;
    this.nextNode = nextNode;
  }
}

//dummy data

//linked list
const firstNode = new Node('A');
const secondNode = new Node('B');
const thirdNode = new Node('C');
const fourthNode = new Node('D');

firstNode.nextNode = secondNode;
secondNode.nextNode = thirdNode;
thirdNode.nextNode = fourthNode;

const linkedList = new LinkedList(firstNode);

console.log(linkedList.reverseList());
linkedList.readAll();

//Doubly linked list
const firstDNode = new DoubleNode('A');
const secondDNode = new DoubleNode('B');
const thirdDNode = new DoubleNode('C');
const fourthDNode = new DoubleNode('D');

firstDNode.nextNode = secondDNode;
secondDNode.nextNode = thirdDNode;
secondDNode.previousNode = firstDNode;
thirdDNode.nextNode = fourthDNode;
thirdDNode.previousNode = secondDNode;
fourthDNode.previousNode = thirdDNode;

const doublyLinkedList = new DoublyLinkedList(firstDNode, fourthDNode);

//doublyLinkedList.readBackwards();

//5. 중간 노드 정보만 가지고 중간 노드 삭제
//{data, nextNode}
//이 노드의 nextNode를 앞의 노드의 nextNode로 바꿔 주어야 한다.
//뒤의 데이터들을 한 칸씩 당기기
//정답: 정해진 하나의 노드니까 그 노드 다음 노드와 다다음 노드만 수정하면 되니 while문은 쓸 필요가 없다.
function deleteMiddle(node) {
  node.data = node.nextNode.data;
  node.nextNode = node.nextNode.nextNode;
}
