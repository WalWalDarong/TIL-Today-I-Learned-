class Greeter1 {
  constructor() {
    this.message = 'Hello';
  }

  sayHello() {
    console.log(this.message);
  }
}

class Greeter2 extends Greeter1 {
  constructor() {
    super();
    this.message = 'Hi';
  }

  sayHello() {
    super.sayHello();
    console.log('World');
  }
}

const greeter1 = new Greeter1();
greeter1.sayHello();

const greeter2 = new Greeter2();
greeter2.sayHello();
