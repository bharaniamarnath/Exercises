const fn1 = function(a,b){ return a+b;  };
const fn2 = (a,b) => { return a*b  };

//Single line
const fn3 = (a) => console.log(`a id ${a}`);

//Multi line
const fn4 = (c,d) => {
    console.log(`c is ${c}`);
    console.log(`d is ${d}`);
}

//No brackets and return keyword
const fn5 = (a,b) => a/b;

//Arrow function with object

const fn6 = (a,b) => ({
    aval: a,
    bval: b
})

//Function call
console.log(fn1(2,3));
console.log(fn2(3,4));
fn3(6);
fn4(8,9);
console.log(fn5(50,2));
console.log(fn6(10,20));
//Calling object value in fn6
console.log(fn6(10,20).bval);
