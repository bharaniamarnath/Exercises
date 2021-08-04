console.log(`Line 1
Line 2`);

let a = 10, b = 20;

let eat = 'breakfast';
let food = () => { return 'apples' };

console.log(`The sum of ${a} and ${b} is ${a+b}`);

//Template literal nesting
const efop = `Today's ${`${eat} is ${food()}`}`;

console.log(efop);

//Tag function
function tagFunc(strings, thingExp, quantExp){
    const str0 = strings[0]; //"The amount of"
    const str1 = strings[1]; //"is"
    const str2 = strings[2]; //All fresh
    const amtExp = quantExp > 10 ? 'more' : 'few';
    return str0 + thingExp + str1 + amtExp + str2;
}

const thing = 'food', quant = 8;
const res = tagFunc `The amount of ${thing} is ${quant}. All fresh.`;
console.log(res);

//Tag function raw
function tagFunc2(strings){
    console.log(strings.raw[0]);
}
tagFunc2 `Line1\nLine2`;

//Temp lit using exp
const crate = {
    id: '00001',
    thing: 'apple',
    quant: 150,
    place: 'North Pole',
    date: 'Jan 01, 3000'
}

let fn1 = (crateData) => {
    return `Crate #${crateData.id} contains ${crateData.quant} amount of ${crateData.thing} shipped to ${crateData.place} on date ${crateData.date}`;
} 

console.log(fn1(crate));
