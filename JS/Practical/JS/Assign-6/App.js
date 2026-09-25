/*----------------Task1--------------------*/
let numbers =new Array(1,2,3,4,5);
console.log("Array:", numbers);
/*-----------Task2------------------------*/
let firstElement = numbers[0];
let lastElement = numbers[numbers.length - 1];
console.log("First Element:", firstElement); 
console.log("Last Element:", lastElement); 
/*-----------Task3------------------------*/
numbers.push(6);
console.log("Array after push:", numbers); 
/*-----------Task4------------------------*/
numbers.pop();
console.log("Array after pop:", numbers); 
/*-----------Task5------------------------*/
numbers.shift();
console.log("Array after shift:", numbers); 
/*-----------Task6------------------------*/
numbers.unshift(7);
console.log("Array after unshift:", numbers); 
/*-----------Task7------------------------*/
let doubled = numbers.map(num => num * 2);
console.log("Double after map:", doubled); 
/*-----------Task8------------------------*/
let evens = numbers.filter(num => num % 2 === 0);
console.log("Even After Filter:", evens); 
/*-----------Task9------------------------*/
let totalSum = numbers.reduce((accumulator, currentValue) => accumulator + currentValue, 0);
console.log("Total sum after reduce:", totalSum); 
/*-----------Task10------------------------*/
let isAllEven = numbers.every(num => num % 2 === 0);
console.log("Is all even after every:", isAllEven);
/*-----------Task11------------------------*/
let isAnyEven = numbers.some(num => num % 2 === 0);
console.log("Is any even after some:", isAnyEven);
/*-----------Task12------------------------*/
let firstEven = numbers.find(num => num % 2 === 0);
console.log("First even after find:", firstEven);
/*-----------Task13------------------------*/
let firstEvenIndex = numbers.findIndex(num => num % 2 === 0);
console.log("First even index after findIndex:", firstEvenIndex);
/*-----------Task14------------------------*/
//let doubled = numbers.map(num => num * 2);
//console.log("Numbers after doubling:", doubled);
/*-----------Task15------------------------*/
//let evens = numbers.filter(num => num % 2 === 0);
//console.log("Numbers after filter:", evens);
/*-----------Task16------------------------*/
let firstThree = numbers.slice(0, 3);
console.log("First three numbers after slice:", firstThree);
/*-----------Task17------------------------*/
let reversed = numbers.reverse();
console.log("Numbers after reverse:", reversed);
/*-----------Task18------------------------*/
let sorted = numbers.sort((a, b) => a - b);
console.log("Numbers after sort:", sorted);
/*-----------Task19------------------------*/
let sum = numbers.reduce((acc, num) => acc + num, 0);
console.log("Sum of numbers after reduce:", sum);
/*-----------Task20------------------------*/
//let isAllEven = numbers.every(num => num % 2 === 0);
//console.log("Is all even after every:", isAllEven);
/*-----------Task21------------------------*/
//let isAnyEven = numbers.some(num => num % 2 === 0);
//console.log("Is any even after some:", isAnyEven);
/*-----------Task22------------------------*/
//let firstEvenIndex = numbers.findIndex(num => num % 2 === 0);
//console.log("Index of first even number after findIndex:", firstEvenIndex);
/*-----------Task23------------------------*/
let firstEvenNumber = numbers.find(num => num % 2 === 0);
console.log("First even number after find:", firstEvenNumber);
/*-----------Task24------------------------*/
for (let i = 0; i < numbers.length; i++) {
    console.log(`for loop element [${i}]:`, numbers[i]);
}
/*-----------Task25------------------------*/
numbers.forEach(num => console.log("forEach element:", num));
/*-----------Task26------------------------*/
let matrix = [
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
];
console.log("2D Array Matrix:", matrix);
/*-----------Task27------------------------*/
let specificValue = matrix[1][1];
console.log("Access value of Row1 Column1:", specificValue);
/*-----------Task28------------------------*/
let sum1 = matrix.reduce((acc, curr) => acc + curr.reduce((acc, curr) => acc + curr, 0), 0);
console.log("Sum of all elements in 2D Array:", sum1);
/*-----------Task29------------------------*/
let arr =[];
arr.push(30);     
arr.unshift(5);   
arr.pop();       
arr.shift();      
console.log("Manipulation Script Array:", arr); 
/*-----------Task30------------------------*/
let arr1 = [1, 2, 3, 4, 5]; 
let arr2 = [6, 7, 8, 9, 10];
let arr3 = arr1.concat(arr2);
console.log("Concatenated Array:", arr3);
/*-----------Task31------------------------*/
let arr4 = [1, 2, 3, 4, 5];
let arr5 = arr4.slice(1, 4);
console.log("Sliced Array:", arr5);
/*-----------Task32------------------------*/
let data =[15,20.30,40,50,60,70,80,90,100];
let mapped = data.map(x => x * 3); 
let filtered = mapped.filter(x => x > 5); 
let reduced = filtered.reduce((acc, curr) => acc + curr, 0); 
console.log(`Result:`, { mapped, filtered, reduced });
/*-----------Task33------------------------*/
let items = ["Apple", "Banana", "Cherry"];
console.log("--- For Loop ---");
for(let i = 0; i < items.length; i++) {
    console.log(items[i]);
}
console.log("--- forEach ---");
items.forEach(item => console.log(item));
/*-----------Task34------------------------*/
let myGrid = [
    [2, 3],
    [3, 4],
    [5, 6]
];
console.log("Grid:", myGrid);
console.log("Grid value (Row 0, Col 1):", myGrid[0][1]); 
/*-----------Task35------------------------*/
function transposeMatrix(matrix) {
    let result = [];

    for (let i = 0; i < matrix[0].length; i++) {
        let rowStr = [];
        for (let j = 0; j < matrix.length; j++) {
            rowStr.push(matrix[j][i]); // અહીં ઇન્ડેક્સ ઉલટાવી દીધા [j][i]
        }
        result.push(rowStr);
    }    
    return result;
}
let originalMatrix = [
    [4, 5, 6],
    [1, 2, 3],
    [7, 8, 9]
];
console.log("Original Matrix:", originalMatrix);
console.log("Transposed Matrix:", transposeMatrix(originalMatrix));
/*-----------Task36------------------------*/





