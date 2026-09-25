/*-------------Task1-----------------*/
var myNumber = 45;
console.log(myNumber); //Task1
/*---------------Task2----------------- */
let myString = "Hello India";
console.log(myString); // Task2
/*-----------Task3----------------*/
const isCodingFun = true;
console.log(isCodingFun); //Task3
/*-----------------Task4-------------------------------*/
let age = 25;
console.log(typeof age); 

let name = "Amit";
console.log(typeof name);

let isLoggedIn = false;
console.log(typeof isLoggedIn); 

let user = { id: 1, role: "Admin" };
console.log(typeof user); 

let colors = ["red", "green", "blue"];
console.log(typeof colors);
/*-----------Task5---------------------*/
let score = 100;
console.log("Initial:", score); 

score = 150; 
console.log("After Change:", score); 
/*----------------Task6----------- */
const pi = 3.14;
console.log(pi);

//pi = 3.14159; 
//console.log(pi);//TypeError: Assignment to constant variable
/*---------------Task7------------- */
let price = 99.99;
let city = "Ahmedabad";
let isAvailable = true;
let emptyData = null;
let type = undefined;
let arr= [1,'a',true];
let obj = {name: "John", age: 30};
let func = function() { console.log("Hello, world!"); };
let date = new Date();
let regexp = /abc/;
let symbol = Symbol("unique");
let bigint = BigInt("123456789012345678901234567890");
let undefinedVar;
let nullVar = null;
let emptyVar = undefined;
let numVar = 42;
let strVar = "Hello, world!";
let boolVar = true;
console.log(`Value: ${boolVar}, Type: ${typeof boolVar}`);
console.log(`Value: ${strVar}, Type: ${typeof strVar}`);
console.log(`Value: ${numVar}, Type: ${typeof numVar}`);
console.log(`Value: ${emptyVar}, Type: ${typeof emptyVar}`);
console.log(`Value: ${nullVar}, Type: ${typeof nullVar}`);
console.log(`Value: ${undefinedVar}, Type: ${typeof undefinedVar}`);
console.log(`Value: ${bigint}, Type: ${typeof bigint}`);
console.log(`Value: ${symbol.description}, Type: ${typeof symbol}`);
console.log(`Value: ${regexp}, Type: ${typeof regexp}`);
console.log(`Value: ${date}, Type: ${typeof date}`);
console.log(`Value: ${func}, Type: ${typeof func}`);
console.log(`Value: ${obj}, Type: ${typeof obj}`);
console.log(`Value: ${arr}, Type: ${typeof arr}`);
console.log(`Value: ${type}, Type: ${typeof type}`);
console.log(`Value: ${price}, Type: ${typeof price}`);
console.log(`Value: ${city}, Type: ${typeof city}`);
console.log(`Value: ${isAvailable}, Type: ${typeof isAvailable}`);
console.log(`Value: ${emptyData}, Type: ${typeof emptyData}`); // object
/*------------------Task8--------------- */
let changingVar = "I can change value";
console.log(changingVar);
changingVar = "Look i got changed!"; 
console.log(changingVar); 
const fixedVar = "I cant change value";
console.log(fixedVar);
try {
    fixedVar = "try to change"; 
} catch (error) {
    console.log("error caught", error.message); 
}

