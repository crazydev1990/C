/*------------Task1---------------------*/
function checkEvenOdd(num) {
    if (num % 2 === 0) {
        console.log(`${num} is Even Number.`);
    } else {
        console.log(`${num} is Odd Number.`);
    }
}
checkEvenOdd(4); 
/*---------------Task2-------------------*/
function calculateSquare(num) {
    return num * num;
}
console.log(calculateSquare(5)); 
/*---------------Task3-------------------*/
const findMax = function(num1, num2) {
    const max = (num1 > num2) ? num1 : num2;
    console.log(`Biggest Num is: ${max} .`);
};
findMax(12, 25); 
/*---------------Task4-------------------*/
const concatenateStrings = function(str1, str2) {
    return str1 + str2;
};
console.log(concatenateStrings("Hello ", "World")); 
/*---------------Task5-------------------*/
const addNumbers = (a, b) => a + b;
console.log(addNumbers(10, 20)); 
/*---------------Task6-------------------*/
const calculateArea = (length, width) => length * width;
console.log(calculateArea(10, 20));
/*---------------Task7-------------------*/
const containsChar = (str, char) => str.includes(char);
console.log(containsChar("JavaScript", "S")); 
console.log(containsChar("JavaScript", "P"));
/*---------------Task8-------------------*/
function multiply(num1, num2 = 1) {
    return num1 * num2;
}
console.log(multiply(5, 4)); 
console.log(multiply(7));
/*-----------Task9------------------------*/
function greet(name, age = 18) {
    return `Hello ${name}, Your age is  ${age} .`;
}
console.log(greet("Amit", 25)); 
console.log(greet("Rahul"));    
/*-----------Task10------------------------*/
function repeatFunction(fn, times) {
    for (let i = 0; i < times; i++) {
        fn();
    }
}
const sayHello = () => console.log("Hello!");
repeatFunction(sayHello, 3); 
/*-----------Task11------------------------*/
function pipeFunctions(fn1, fn2, value) {
    return fn2(fn1(value));
}
const addTwo = (x) => x + 2;
const multiplyByThree = (x) => x * 3;
console.log(pipeFunctions(addTwo, multiplyByThree, 5)); 
/*-----------Task12------------------------*/
const checkEvenOddScript = (num) => console.log(num % 2 === 0 ? "Even" : "Odd");
checkEvenOddScript(15);
/*-----------Task13------------------------*/
const getSquare = (num) => num * num;
console.log(getSquare(6));
/*-----------Task14------------------------*/
const mergeText = function(t1, t2) 
{ 
    return t1.concat(t2); 
};
console.log(mergeText("Vue", "JS"));
/*-----------Task15------------------------*/
const quickSum = (p, q) => p + q;
console.log(quickSum(40, 2));
/*-----------Task16------------------------*/
const getFullName = (fname, lname) => fname.concat(" ", lname);
console.log(getFullName("Rahul", "Sharma"));
/*-----------Task17------------------------*/
function applyMultipleTimes(fn, count, val) {
    let currentVal = val;
    for (let i = 0; i < count; i++) {
        currentVal = fn(currentVal);
    }
    return currentVal;
}
const doubleIt = (n) => n * 2;
console.log(applyMultipleTimes(doubleIt, 3, 2)); 






