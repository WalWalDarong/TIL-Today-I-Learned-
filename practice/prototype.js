function Greeter1() {
  this.message = 'Hello';
}

Greeter1.prototype.sayHello = function () {
  console.log(this.message);
};

function Greeter2() {
  Greeter1.call(this);
  this.message = 'Hi';
}

Greeter2.prototype = Object.create(Greeter1.prototype);
Greeter2.prototype.constructor = Greeter2;

console.log(Greeter2.prototype);

Greeter2.prototype.sayHello = function () {
  Greeter1.prototype.sayHello.call(this);
  console.log('World');
};

const greeter1 = new Greeter1();
greeter1.sayHello();

const greeter2 = new Greeter2();
greeter2.sayHello();
