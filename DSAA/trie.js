class Trie {
  constructor(node = null) {
    this.root = node;
  }

  //3. key순회 (못 풀음)
  printKeys(node = this.root, words = []) {
    console.log('node: ', node);
    if (node.children) {
      //각 key를 순회해야 함.
      Object.keys(node.children).forEach((value) => {
        words.push(value);
      });
      this.printKeys(node.children, words);
    } else {
      return words;
    }
    return words;
  }

  //4. autocorrect
  autocorrect(word, node = this.root, words = []) {
    let currentNode = node;
    for (const letter of word) {
      if (currentNode[letter].children) {
      }
    }
  }
}

class TrieNode {
  constructor(children = null) {
    this.children = children;
  }
}

const f = new TrieNode();
f.children = { '*': null };

const e = new TrieNode();
e.children = { '*': null };

const d = new TrieNode();
d.children = { '*': null };

const c = new TrieNode();
c.children = { '*': null };

const b = new TrieNode();
b.children = { e, f };

const a = new TrieNode();
a.children = { c, d };

const first = new TrieNode();
first.children = { a, b };

const trie = new Trie(first);
console.log(trie.printKeys());

// const a = {
//   a: 1,
//   b: 2,
//   c: 3,
//   d: 4,
// };

//console.log(Object.keys(a));
