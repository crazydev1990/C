// Task 1: Basic closure where inner function accesses outer variable
function createGreeting(outerVariable) {
    return function() {
        return `Outer variable value: ${outerVariable}`;
    };
}

const basicClosure = createGreeting("Hello Closures!");
console.log("--- Task 1 Output ---");
console.log(basicClosure()); 


// Task 2: Closure maintaining a completely private counter
function createCounter() {
    let count = 0; // Private state variable

    return {
        increment: function() {
            count++;
        },
        getValue: function() {
            return count;
        }
    };
}

const myCounter = createCounter();
console.log("\n--- Task 2 Output ---");
myCounter.increment();
myCounter.increment();
console.log(`Current Counter Value: ${myCounter.getValue()}`); // Outputs: 2
// console.log(myCounter.count); // Undefined (safe variable encapsulation)
// Task 3: Unique ID generator using variable state tracking
function createIdGenerator() {
    let lastGeneratedId = 0; // Remembers state inside this closure execution context

    return function(prefix = "ID_") {
        lastGeneratedId++;
        return `${prefix}${lastGeneratedId}`;
    };
}

const generateUserId = createIdGenerator();
console.log("\n--- Task 3 Output ---");
console.log(generateUserId()); // Outputs: ID_1
console.log(generateUserId()); // Outputs: ID_2


// Task 4: User greeting capturing a username argument parameter
function greetUserFactory(username) {
    return function() {
        return `Hello, welcome back ${username}!`;
    };
}

const greetAlex = greetUserFactory("Alex");
console.log("\n--- Task 4 Output ---");
console.log(greetAlex()); // Outputs: Hello, welcome back Alex!
// Task 5: Creating an array of functions returning distinct sequence positions
function buildFunctionArray() {
    const functionCollection = [];

    // Using modern block-scoped 'let' creates a brand new closure state environment for each loop cycle
    for (let i = 0; i < 5; i++) {
        functionCollection.push(function() {
            console.log(`Executing function compiled at array index position: ${i}`);
        });
    }

    return functionCollection;
}

const practicalFunctions = buildFunctionArray();
console.log("\n--- Task 5 Output ---");
practicalFunctions[0](); // Outputs index: 0
practicalFunctions[3](); // Outputs index: 3
// Task 6: Module system managing a dynamic custom repository collection
const itemManagerModule = (function() {
    let privateItemsList = []; // Secret encapsulated data container array

    return {
        addItem: function(item) {
            privateItemsList.push(item);
            console.log(`Successfully added: "${item}"`);
        },
        removeItem: function(item) {
            const index = privateItemsList.indexOf(item);
            if (index !== -1) {
                privateItemsList.splice(index, 1);
                console.log(`Successfully removed: "${item}"`);
            } else {
                console.log(`Item "${item}" could not be located.`);
            }
        },
        listItems: function() {
            // Returns a shallow array copy to prevent external direct manipulation of base reference pointer
            return [...privateItemsList];
        }
    };
})();

console.log("\n--- Task 6 Output (Module Pattern) ---");
itemManagerModule.addItem("Laptop Computer");
itemManagerModule.addItem("Mechanical Keyboard");
console.log("Current Inventory List:", itemManagerModule.listItems());
itemManagerModule.removeItem("Laptop Computer");
console.log("Updated Inventory List:", itemManagerModule.listItems());
// Task 7: Generic generic memoization higher-order utility function
function memoizeFunction(targetFn) {
    const computationCache = {}; // Persistent lookup table storage map object

    return function(...args) {
        const structuralKey = JSON.stringify(args);
        
        // If computation is inside cache mapping container, serve it instantly without executing calculations again
        if (structuralKey in computationCache) {
            console.log(`[Cache Hit] Serving cached result for values: ${structuralKey}`);
            return computationCache[structuralKey];
        }

        console.log(`[Cache Miss] Calculating new execution path for values: ${structuralKey}`);
        const freshlyCalculatedResult = targetFn(...args);
        computationCache[structuralKey] = freshlyCalculatedResult;
        return freshlyCalculatedResult;
    };
}


// Task 8: Factorial execution mapping path example passed to memoization function
const calculateFactorial = (n) => {
    if (n === 0 || n === 1) return 1;
    return n * calculateFactorial(n - 1);
};

// Create a memoized version of the factorial function
const memoizedFactorial = memoizeFunction(calculateFactorial);

console.log("\n--- Tasks 7 & 8 Output (Memoization) ---");
console.log(`Result: ${memoizedFactorial(5)}`); // Run 1: Calculates calculation values
console.log(`Result: ${memoizedFactorial(5)}`); // Run 2: Pulls solution straight out of storage map objects instantly
console.log(`Result: ${memoizedFactorial(6)}`); // Run 3: Calculates fresh missing paths dynamically
