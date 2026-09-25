/*-----------------Task1------------------------------*/
for (let i = 1; i <= 10; i++) {
    console.log(i);
}
/*-----------------Task2------------------------------*/
let n = 5;
for (let i = 1; i <= 10; i++) {
    console.log(`${n} x ${i} = ${n * i}`);
}
/*-----------------Task3------------------------------*/
let sum = 0;
let i = 1;
while (i <= 10) {
    sum = sum + i;
    i++;
}
console.log("Sum of first 10 natural numbers is:", sum); 
/*-----------------Task4------------------------------*/
let j = 10;
while (j >= 1) {
    console.log(j);
    j--;
}
/*-----------------Task5------------------------------*/
let k = 1;
do {
    console.log(k);
    k++;
} while (k <= 5);
/*-----------------Task6------------------------------*/
let num = 5;
let factorial = 1;
let count = num;
do {
    factorial *= count;
    count--;
} while (count > 0);
console.log(`Factorial of ${num} :`, factorial); 
/*-----------------Task7------------------------------*/
for (let i = 1; i <= 5; i++) {
    let rowStr = ""; 
    for (let j = 1; j <= 5; j++) {
        if (j <= i) {
            rowStr += "* "; 
        }
    }
    console.log(rowStr); 
}
/*-----------------Task8------------------------------*/
for (let i = 1; i <= 10; i++) {
    if (i === 5) {
        continue; 
    }
    console.log(i);
}
/*-----------------Task9------------------------------*/
for (let i = 1; i <= 10; i++) {
    if (i === 7) {
        break; 
    }
    console.log(i);
}
/*-----------------Task10------------------------------*/
console.log("--- For Loop  ---");
for (let i = 1; i <= 10; i++){
   console.log(i);
}
console.log("--- While Loop ---");
let w = 1;
while(w <= 10) 
{ 
    console.log(w); 
    w++; 
}
/*------------Task11------------------------------*/
function printTable(number) {
    for (let i = 1; i <= 10; i++) {
        console.log(`${number} x ${i} = ${number * i}`);
    }
}
printTable(5);
/*------------Task12------------------------------*/
function calculateSumUpTo(limit) {
    let total = 0, current = 1;
    while(current <= limit) {
        total = total + current;
        current++;
    }
    return total;
}
console.log("Sum:", calculateSumUpTo(10));
/*------------Task13------------------------------*/
function getFactorial(n) {
    let result = 1;
    let i = 1;
    do {
        result = result * i;
        i++;
    } while (i <= n);

    return result;
}
console.log("Factorial of 5:", getFactorial(5)); 
/*------------Task14------------------------------*/
function printStarPattern(rows) {
    for (let i = 1; i <= rows; i++) {
        let rowStr = ""; 
        for (let j = 1; j <= i; j++) {
            rowStr += "* "; 
        }
        console.log(rowStr); 
    }
}
printStarPattern(5);

