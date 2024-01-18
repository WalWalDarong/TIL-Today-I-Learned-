function machine() {
  this.q = 'strile';
  this.w = 'snowball';
}

machine.prototype.name = 'kim';
machine.prototype.sayHi = function () {
  console.log(this.name, ', Hi!');
};

const phone = new machine();

console.log('phone: ', phone);
console.log('phone.prototype: ', phone.prototype);
console.log('phone.name: ', phone.name);
phone.sayHi();
console.log('phone.sayHi: ', phone.sayHi);
console.log('machine.prototype: ', machine.prototype);
console.log('machine: ', machine);

console.log('----------------------------');
function doSomething() {}
doSomething.prototype.foo = 'bar';
var someInstancing = new doSomething();
someInstancing.prop = 'some value';
console.log('doSomething.prototype: ', doSomething.prototype);
console.log('someInstancing: ', someInstancing);
console.log('doSomething.foo: ', doSomething.foo);
var doSomethingElse = function () {};
console.log('doSomethingElse.prototype: ', doSomethingElse.prototype);

// "use strict";

class Polygon {
  constructor(height, width) {
    this.height = height;
    this.width = width;
  }
}

class Square extends Polygon {
  constructor(sideLength) {
    super(sideLength, sideLength);
  }
  get area() {
    return this.height * this.width;
  }
  set sideLength(newLength) {
    this.height = newLength;
    this.width = newLength;
  }
}

var square = new Square(2);
console.log('square.area:', square.area);
