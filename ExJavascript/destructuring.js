let fruits = ['Apple', 'Orange'];
let [fruit1, fruit2] = fruits;
console.log(fruit1);
console.log(fruit2);

let vegetables = ['Avocado', 'Broccoli', 'Carrot', 'Dandelion'];
let [veg1,,veg3] = vegetables;
console.log(veg3);

let [a=1, b=2, c=3] = ['Banana', true];
console.log(b);

let x = 50;
let y = 100;
[x,y] = [y,x];
console.log(x);

const data = [1,2,3];
const[p,,q,r=4] = data;
console.log(p,q,r);

let fn1 = (a1,b1,...args1) => {
    console.log(a1);
    console.log(b1);
    console.log(args1);
}

fn1(1,2,3,4,5);

let fn2 = (...[a2,b2,c2]) => {
    console.log(a2,b2,c2);
}
fn2(1,2);

//Object destructuring

const obj1 = {objID: 101, objName: 'Orange'};
const {objID, objName} = obj1;
console.log(objID, objName);

const obj2 = {objID: 201, objName: 'Banana'};
const {objID: oid, objName: oname} = obj2;
console.log(oid);

const obj3 = {objID: 301, objName: 'Pear'};
const {objID: oid1, objName: oname1 = 'Peaches', objType = 'Fruit'} = obj3;
console.log(oname1, objType);

const obj4 = {objID: 401, objName: 'Grape'};
let oid2, oname2;
({objID: oid2, objName: oname2} = obj4);
console.log(oname2);

const obj5 = {objID: 501, objName: 'Lemon', objType: 'Fruit', objColor: 'Yellow'};
const {objID: oid3, ...objProps} = obj5;
console.log(oid3);
console.log(objProps);

const obj6 = {objID: 601, objNums: [10,20,30]};
const {objID: oid4, objNums: [n1,,n3]} = obj6; 
//Get 1st and 3rd value from objNums
console.log(oid4, n1, n3);

//destructuring implementation

const objMetadata = [
    {
        objBrandID: 1001,
        objBrandName: 'Fishes & Co',
        objProds: [
            {
                objProdName: 'Canned Tuna',
                objProdDoM: '2020-01-01',
                objProdDoE: '2021-10-01',
                objProdMRP: 50.00
            },
            {
                objProdName: 'Canned Shrimp',
                objProdDoM: '2020-03-01',
                objProdDoE: '2021-12-01',
                objProdMRP: 20.00
            }
        ]
    }
];

const [ objMd ] = objMetadata;
const [ {objProds: prods} ] = objMetadata;
const [ {objProds: [prod]} ] = objMetadata;
const [ {objProds: [{objProdMRP}]} ] = objMetadata;

//console.log(objMd);
console.log(prods);
console.log(prods.length);
console.log(prods[1]); //Array starts with 0th element
//console.log(prod);
//console.log(objProdMRP);
