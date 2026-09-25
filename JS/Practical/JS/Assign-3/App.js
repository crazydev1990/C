/*-------------------------------Task1--------------------------------------*/
let num = 10;
if (num > 0) {
    console.log("Positive.");
} else if (num < 0) {
    console.log("Negative");
} else {
    console.log("Zero");
}
/*-----------------------Task2---------------------------------------------*/
let age = 20;
if (age >= 18) {
    console.log("You can vote.");
} else {
    console.log("You can not vote.");
}
/*-----------------------Task3---------------------------------------------*/
let a = 15, b = 25, c = 20;

if (a >= b) {
    if (a >= c) {
        console.log("A is big", a);
    } else {
        console.log("C is big", c);
    }
} else {
    if (b >= c) {
        console.log("B is big", b);
    } else {
        console.log("C is big", c);
    }
}
/*-----------------------Task4---------------------------------------------*/
let dayNumber = 3;
switch (dayNumber) {
    case 1: console.log("Monday"); break;
    case 2: console.log("Tuesday"); break;
    case 3: console.log("Wednesday"); break;
    case 4: console.log("Thursday"); break;
    case 5: console.log("Friday"); break;
    case 6: console.log("Saturday"); break;
    case 7: console.log("Sunday"); break;
    default: console.log("Invalid day number!");
}
/*-----------------------Task5---------------------------------------------*/
let score = 85;
switch (Math.floor(score / 10)) {
    case 10:
    case 9:  console.log("Grade: A"); break;
    case 8:  console.log("Grade: B"); break;
    case 7:  console.log("Grade: C"); break;
    case 6:  console.log("Grade: D"); break;
    default: console.log("Grade: F (Failed)");
}
/*-----------------------Task6---------------------------------------------*/
let checkNum = 7;
let result = (checkNum % 2 === 0) ? "Even" : "Odd";
console.log(` ${checkNum} is ${result} `);
/*-----------------------Task7---------------------------------------------*/
let year = 2026;
if ((year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0)) {
    console.log(`${year} is leap year.`);
} else {
    console.log(`${year} is not leap year.`);
}
/*-----------------------Task8---------------------------------------------*/
function checkNumber(n) {
    if (n > 0) return "Positive";
    if (n < 0) return "Negative";
    return "Zero";
}
console.log(checkNumber(-5));
/*-----------------------Task9---------------------------------------------*/
function checkVoting(age) {
    console.log(age >= 18 ? "Eligible to vote" : "Not eligible to vote");
}
checkVoting(16);
/*-----------------------Task10---------------------------------------------*/
function getDayName(dayNum) {
    const days = ["","Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"];
    console.log(days[dayNum] || "Invalid Day Number");
}
getDayName(5);
/*-----------------------Task11---------------------------------------------*/
function getGrade(score) {
    if (score >= 90) return 'A';
    if (score >= 80) return 'B';
    if (score >= 70) return 'C';
    if (score >= 60) return 'D';
    return 'F';
}
console.log("Grade:", getGrade(78));
/*-----------------------Task12---------------------------------------------*/
function isLeapYear(year) {
    let check = ((year % 4 === 0 && year % 100 !== 0) || (year % 400 === 0));
    console.log(` ${year} is leap year?`, check);
}
isLeapYear(2026);
