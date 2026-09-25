// Task 1: Function intentionally throwing an error handled by try-catch
function checkPermission(role) {
    try {
        if (role !== 'admin') {
            throw new Error("Access Denied: Insufficient user privileges.");
        }
        console.log("Access Granted. Welcome to the dashboard!");
    } catch (error) {
        console.error(`Task 1 Caught Exception: ${error.message}`);
    }
}

// Task 2: Division function throwing an error if denominator is zero
function safeDivision(numerator, denominator) {
    try {
        if (denominator === 0) {
            throw new Error("Mathematical Error: Cannot divide by zero.");
        }
        const result = numerator / denominator;
        console.log(`Task 2 Division Result: ${result}`);
    } catch (error) {
        console.error(`Task 2 Caught Exception: ${error.message}`);
    }
}

// Task 3: Script displaying complete execution flow using finally block
function executionFlowDemo() {
    try {
        console.log("\n--- Starting Flow Execution ---");
        console.log("Step A: Executing operations inside 'try' block...");
        // Forcing an error to show full catch-to-finally progression
        JSON.parse("{ invalid-json-string }"); 
    } catch (error) {
        console.log("Step B: Exception detected! Diverting control flow to 'catch' block.");
    } finally {
        console.log("Step C: Reached 'finally' block. (This block executes regardless of the outcome).");
    }
}

// Execute tests
checkPermission('guest');
safeDivision(10, 0);
executionFlowDemo();

// Task 4: Create a custom error class that extends the built-in Error class
class ValidationError extends Error {
    constructor(message) {
        super(message);
        this.name = "ValidationError";
    }
}

// Task 5: Function validating user input and throwing the custom error
function processUsername(inputString) {
    try {
        // Validation check: ensure string is not empty or filled only with whitespaces
        if (!inputString || inputString.trim() === "") {
            throw new ValidationError("Input verification failed: Username field cannot be blank.");
        }
        console.log(`Task 5 Registration verified for: "${inputString}"`);
    } catch (error) {
        if (error instanceof ValidationError) {
            console.error(`[${error.name}] handles custom logic: ${error.message}`);
        } else {
            console.error(`Unrecognized runtime error: ${error.message}`);
        }
    }
}

// Execute tests
processUsername("");          // Triggers ValidationError catch path
processUsername("Alex123");   // Successful execution path

// Helper: Function returning a promise that randomly resolves or rejects
function generateRandomTask() {
    return new Promise((resolve, reject) => {
        const isSuccessful = Math.random() > 0.5;
        setTimeout(() => {
            if (isSuccessful) {
                resolve("Operation resolved cleanly!");
            } else {
                reject("Operation rejected due to system failure.");
            }
        }, 1000);
    });
}

// Task 6: Handling promise rejection using classical .catch()
function runPromiseWithCatch() {
    generateRandomTask()
        .then((successMessage) => {
            console.log(`Task 6 Resolved: ${successMessage}`);
        })
        .catch((errorMessage) => {
            console.error(`Task 6 Caught via .catch(): ${errorMessage}`);
        });
}

// Task 7: Handling promise rejection inside an async function using try-catch
async function runAsyncAwaitWithTryCatch() {
    try {
        const result = await generateRandomTask();
        console.log(`Task 7 Resolved: ${result}`);
    } catch (error) {
        console.error(`Task 7 Caught via Async Try-Catch: ${error}`);
    }
}

// Execute triggers
runPromiseWithCatch();
runAsyncAwaitWithTryCatch();
const invalidUrl = "https://domain-does-not-exist.xyz";

// Task 8: Fetching from an invalid URL using .catch() promises
function fetchNetworkDataWithCatch() {
    fetch(invalidUrl)
        .then((response) => {
            if (!response.ok) throw new Error(`HTTP network error code: ${response.status}`);
            return response.json();
        })
        .catch((error) => {
            console.error(`Task 8 fetch caught a problem: ${error.message} (Failed connection)`);
        });
}

// Task 9: Fetching from an invalid URL inside an async function using try-catch
async function fetchNetworkDataWithAsyncTryCatch() {
    try {
        const response = await fetch(invalidUrl);
        if (!response.ok) throw new Error(`HTTP network error code: ${response.status}`);
        const data = await response.json();
        console.log(data);
    } catch (error) {
        console.error(`Task 9 fetch caught a problem: ${error.message} (Failed connection)`);
    }
}

// Run networking checks
fetchNetworkDataWithCatch();
fetchNetworkDataWithAsyncTryCatch();
