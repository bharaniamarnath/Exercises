class Vehicle{
    constructor(wheels, topSpeed){
        this.wheels = wheels;
        this.topSpeed = topSpeed;
    }
}

let tricycle = new Vehicle(3, 10);
console.log(tricycle.wheels, tricycle.topSpeed);

let bicycle = new Vehicle(2, 20);
console.log(bicycle.wheels, bicycle.topSpeed);

class Food{
    constructor(name, calories, eatable=true, servings=1){
        this.name = name;
        this.calories = calories;
        this.eatable = eatable;
        this.servings = servings;
    }
    getName(){
        return this.name;
    }
    getCalories(){
        return (this.servings * this.calories);
    }
    getServings(){
        return this.servings;
    }
}

let burger = new Food('Burger', 150);
console.log(burger.getName(), burger.getCalories(), burger.getServings());

let buritto = new Food('Buritto', 250, true, 2);
console.log(buritto.getName(), buritto.getCalories(), buritto.getServings());

class Drink extends Food{
    constructor(name, calories, eatable, servings, drinkable, type){
        super(name, calories, eatable, servings);
        this.drinkable = drinkable;
        this.type = type;
    }
    getType(){
        return this.type;
    }
}

let dew = new Drink('Mountain Dew', 75, true, 3, true, 'Cold');
console.log(dew.getName(), dew.getType());

let soup = new Drink('Soup', 125, true, 2, true, 'Hot');
console.log(soup.getName(), soup.getType(), soup.getCalories(), soup.getServings());


class Creature{
    constructor(name, type, mode){
        this.name = name;
        this.type = type;
        this.mode = mode;
    }
    getName(){
        return this.name;
    }
    getType(){
        return this.type;
    }
    getMode(){
        return this.mode;
    }
}

class Animal extends Creature{
    constructor(name, type, mode, feed, legs=4){
        super(name, type, mode);
        this.feed = feed;
        this.legs = legs;
    }
    getFeed(){
        return this.feed;
    }
    getLegs(){
        return this.legs;
    }
}

class Bird extends Creature{
    constructor(name, type, mode, feed, legs=2, flyable=true){
        super(name, type, mode);
        this.feed = feed;
        this.legs = legs;
        this.flyable = flyable;
    }
    getFeed(){
        return this.feed;
    }
    getLegs(){
        return this.legs;
    }
    getFlyable(){
        return this.flyable;
    }
}

let lion = new Animal('Lion', 'Animal', 'Land', 'Carnivorous', 4);
console.log(lion.getName(), lion.getType(), lion.getMode(), lion.getFeed(), lion.getLegs());

let kiwi = new Bird('Kiwi', 'Bird', 'Air', 'Carnivorous', 2, false);
console.log(kiwi.getName(), kiwi.getType(), kiwi.getFlyable());
