// Task 1: Defining the Person class with basic properties and methods
class Person {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    getGreeting() {
        return `Hello, my name is ${this.name} and I am ${this.age} years old.`;
    }

    // Task 2: Method to update the age property
    updateAge(newAge) {
        this.age = newAge;
        console.log(`Age updated successfully! New age: ${this.age}`);
    }
}

// Verification
const personInstance = new Person("John Doe", 30);
console.log(personInstance.getGreeting()); // Task 1 Output

personInstance.updateAge(31);              // Task 2 Output
console.log(personInstance.getGreeting()); // Verification of updated state

// Task 3: Defining Student class extending the base Person class
class Student extends Person {
    constructor(name, age, studentId) {
        super(name, age); // Calls parent class constructor
        this.studentId = studentId;
    }

    getStudentId() {
        return `Student ID: ${this.studentId}`;
    }

    // Task 4: Overriding the parent greeting method
    getGreeting() {
        return `Hello, my name is ${this.name}, I am ${this.age} years old, and my Student ID is ${this.studentId}.`;
    }
}

// Verification
const studentInstance = new Student("Jane Smith", 20, "S12345");
console.log(studentInstance.getStudentId()); // Task 3 Output
console.log(studentInstance.getGreeting());  // Task 4 Output (Overridden method)

class PersonWithStatic {
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    // Task 5: Static generic greeting method
    static genericGreeting() {
        return "Welcome! This is a generic greeting from the Person class system.";
    }
}

class StudentWithStaticCount {
    // Task 6: Static property tracking total instances
    static totalStudents = 0;

    constructor(name, studentId) {
        this.name = name;
        this.studentId = studentId;
        
        // Increment static field every time constructor is fired
        StudentWithStaticCount.totalStudents++;
        console.log(`Total active students registered: ${StudentWithStaticCount.totalStudents}`);
    }
}

// Verification
// Task 5 Call: Executed on the class itself, no 'new' instance needed
console.log(PersonWithStatic.genericGreeting()); 

// Task 6 Call: Instantiating objects to trigger tracking increments
const student1 = new StudentWithStaticCount("Alice", "S001");
const student2 = new StudentWithStaticCount("Bob", "S002");


class DetailedPerson {
    // Task 7: Constructor setup with separate first/last name tracking
    constructor(firstName, lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }

    // Getter method for fullName
    get fullName() {
        return `${this.firstName} ${this.lastName}`;
    }

    // Task 8: Setter method to parse and update distinct fields
    set fullName(nameString) {
        const nameParts = nameString.split(" ");
        this.firstName = nameParts[0] || "";
        this.lastName = nameParts[1] || "";
    }
}

// Verification
const user = new DetailedPerson("Clark", "Kent");
console.log(`Initial Full Name (via getter): ${user.fullName}`); // Task 7 Output

user.fullName = "Bruce Wayne"; // Task 8 Trigger
console.log(`Updated Full Name (via getter): ${user.fullName}`); 
console.log(`Verified Split Fields -> First: ${user.firstName}, Last: ${user.lastName}`);

// Task 9: Account class containing secure private balance field
class Account {
    // Private field declaration
    #balance;

    constructor(initialDeposit) {
        // Ensure starting balance isn't negative
        this.#balance = initialDeposit >= 0 ? initialDeposit : 0;
    }

    // Secure method to view data without allowing external tampering
    getBalance() {
        return this.#balance;
    }

    deposit(amount) {
        if (amount > 0) {
            this.#balance += amount;
            console.log(`Successfully deposited: $${amount}`);
        } else {
            console.log("Deposit amount must be positive.");
        }
    }

    withdraw(amount) {
        if (amount <= 0) {
            console.log("Withdrawal amount must be positive.");
        } else if (amount > this.#balance) {
            console.log("Transaction Denied: Insufficient opening funds available.");
        } else {
            this.#balance -= amount;
            console.log(`Successfully withdrew: $${amount}`);
        }
    }
}

// Task 10: Verification testing
const myAccount = new Account(100);
console.log(`Opening Balance: $${myAccount.getBalance()}`);

myAccount.deposit(50);
console.log(`Current Balance: $${myAccount.getBalance()}`);

myAccount.withdraw(30);
console.log(`Current Balance: $${myAccount.getBalance()}`);

myAccount.withdraw(200); // Should fail due to guard blocks

// Trying to access private field directly from outside the class triggers a SyntaxError
// console.log(myAccount.#balance); // Uncaught SyntaxError: Private field '#balance' must be declared...
// in an enclosing class