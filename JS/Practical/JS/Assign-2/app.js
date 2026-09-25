/*--------------Task1------------------------------- */
let num1 = 15;
let num2 = 10;
let sum = num1 + num2;
console.log("Addition:", sum); 
/*--------------------Task2--------------------------------------*/
let diff = num1 - num2;
console.log("Subtraction:", diff); 
/*--------------------Task3---------------------------------------------*/
let prod = num1 * num2;
console.log("Multiplication:", prod); 
/*---------------------Task4----------------------------------------------- */
let div = num1 / num2;
console.log("Divison:", div); 
/*---------------------Task5----------------------------------------------- */
let rem = num1 % num2;
console.log("Remainder:", rem); 
/*---------------------Task6----------------------------------------------- */
let x = 20;
x += 5; 
console.log("+= :", x); 
/*-----------------------Task7--------------------------------------------- */
let y = 30;
y -= 10; 
console.log("-= :", y); 
/*-----------------------Task8--------------------------------------------- */
let a = 12;
let b = 8;
console.log("a > b:", a > b);   
console.log("a < b:", a < b);   
/*------------------------Task9-------------------------------------------- */
let c = 15;
let d = 15;
console.log("c >= d:", c >= d); 
console.log("c <= d:", c <= d); 
/*------------------------Task10---------------------------------------------*/
let p = 5;       
let q = "5";
console.log("p == q:", p == q);   //val
console.log("p === q:", p === q); //type n val
/*------------------------Task11------------------------------------------*/
let isAdult = true;
let hasVoterID = true;
console.log("Can vote?", isAdult && hasVoterID); 
/*-------------------------Task12-------------------------------------------*/
let hasCash = false;
let hasCard = true;
console.log("Can Pay?", hasCash || hasCard); // true
/*------------------------Task13--------------------------------------------*/
let isWeekend = false;
console.log("Is it working day?", !isWeekend); 
/*-----------------------Task14---------------------------------------------*/
let number = -7;
let result = (number >= 0) ? "Positive" : "Negative";
console.log("Number of which type?:", result); 
/*-----------------------Task15--------------------------------------------*/
function runArithmetic(n1, n2) {
    console.log(`Numbers Inputs: ${n1} અને ${n2}`);
    console.log("Summation:", n1 + n2);
    console.log("Subtraction:", n1 - n2);
    console.log("Multiplication:", n1 * n2);
    console.log("Divison:", n1 / n2);
    console.log("Reminder:", n1 % n2);
}
runArithmetic(20, 4);
/*----------------------Task16----------------------------------------------*/
function checkLogic(val1, val2) {
    console.log(`Comparison: ${val1} > ${val2} ?`, val1 > val2);
    console.log(`Comparison: ${val1} === ${val2} ?`, val1 === val2);  
    console.log(`Comparison: ${val1} != ${val2} ?`, val1 != val2); 
    console.log(`Comparison: ${val1} == ${val2} ?`, val1 == val2);
    console.log(`Comparison: ${val1} <= ${val2} ?`, val1 <= val2);
    let check = (val1 > 0) && (val2 > 0);
    console.log("Are numbers greater than 0?:", check);
}
checkLogic(10, 20);
/*------------------------Task17--------------------------------------------*/
function checkNumberType(num) {
    let check = (num > 0) ? "Positive" : ((num < 0) ? "Negative" : "Zero");
    console.log(` ${num} is ${check} .`);
}
checkNumberType(5);





