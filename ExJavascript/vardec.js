//Variable reassignment

var example = {prop1: 'test'};
console.log(example);
example = 10;
console.log(example);

let example2 = {prop2: 'test2'};
console.log(example2);
example2 = 20;
console.log(example2);

//Variable hoisting

example3 = 30;
console.log(example3);

//const example3; Error
//let example3; Error
var example3; //Hoisted
