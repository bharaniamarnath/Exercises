//ES5 function

function getData(id, name, age){
    return{
        id: id,
        name: name,
        age: age
    };
}

//ES6 function

function getData2(id, name, age){
    return{
        id,
        name,
        age
    };
}

//ES5 object function

function getData3(id, name, age){
    return{
        id: id,
        name: name,
        getAge: function(){ return age; }
    };
}

//ES6 object function

function getData4(id, name, age){
    return{
        id,
        name,
        getAge(){ return age; }
    };
}

//Computed properties

const varName = 'thingName';

const thing = {
    [ varName ]: 'Orange',
    thingQuant: 10
};

const varName2 = 'thing';

function compVarName(type){
    return type + 'Type';
}

const thing2 = {
    [ varName2 + 'Name' ]: 'Banana',
    [ compVarName('thing') ]: 'Fruit',
    thingQuant: 20
}

//Console output

console.log(getData(101,'A',10));
console.log(getData2(201,'B',20));

console.log(getData3(301,'C',30).getAge());
console.log(getData4(401,'D',40).getAge());

console.log(thing.thingName);

console.log(thing2.thingName);
console.log(thing2.thingType);
