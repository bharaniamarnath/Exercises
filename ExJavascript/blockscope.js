//Top level scope
function blockScopeEx(){
    //Scope block 1
    const x = 5;
    for(let i=0; i<x; i++){
        //Scope block 2
        console.log(i);
    }
    if(x == 5){
        //Scope block 3
        console.log('x is ' + x);
    }
    else{
        //Scope block 4
        console.log('x is not ' + x);
    }
    {
        //Scope block 5
        const y = 10;
        console.log('y is ' + y);
    }
    //Accessing variable y outside its scope block throws error
    //console.log('y is ' + y);
}
//Function call
blockScopeEx();
