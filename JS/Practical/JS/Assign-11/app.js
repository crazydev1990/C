// Task 1: Promise that resolves after 2 seconds
const resolvingPromise = new Promise((resolve) => {
    setTimeout(() => {
        resolve("Task 1: Success! The operation resolved successfully.");
    }, 2000);
});

resolvingPromise.then((message) => {
    console.log(message);
});


// Task 2: Promise that rejects after 2 seconds
const rejectingPromise = new Promise((_, reject) => {
    setTimeout(() => {
        reject(new Error("Task 2: Error! Something went wrong."));
    }, 2000);
});

rejectingPromise.catch((error) => {
    console.error(error.message);
});

// Task 3: Simulating sequential server data fetching
function fetchData(step, data) {
    return new Promise((resolve) => {
        setTimeout(() => {
            resolve(`Fetched ${step}: ${data}`);
        }, 1000);
    });
}

fetchData("Step 1", "User Information")
    .then((result) => {
        console.log(result);
        return fetchData("Step 2", "User Preferences");
    })
    .then((result) => {
        console.log(result);
        return fetchData("Step 3", "User Order History");
    })
    .then((result) => {
        console.log(result);
        console.log("All sequential database steps finished.");
    });

    // Helper helper promise for resolution
const getSuccessData = () => new Promise(res => setTimeout(() => res("Async/Await Data successfully loaded!"), 1500));

// Helper promise for failure
const getFailData = () => new Promise((_, rej) => setTimeout(() => rej("Async/Await Error: Target not found!"), 1500));

// Task 4: Async function waiting for resolution
async function handleResolution() {
    console.log("Waiting for data...");
    const data = await getSuccessData();
    console.log(`Task 4 Result: ${data}`);
}

// Task 5: Async function catching rejection
async function handleRejection() {
    try {
        console.log("Testing error boundary...");
        await getFailData();
    } catch (error) {
        console.log(`Task 5 caught an issue: ${error}`);
    }
}

// Execute triggers
handleResolution();
handleRejection();

const apiUrl = 'https://typicode.com';

// Task 6: Fetching data using .then() Promises
function fetchWithPromises() {
    fetch(apiUrl)
        .then((response) => {
            if (!response.ok) throw new Error("Network issue encountered.");
            return response.json();
        })
        .then((data) => {
            console.log("Task 6 (Promises) Title Received:", data.title);
        })
        .catch((err) => console.error("Task 6 Error:", err));
}

// Task 7: Fetching data using Async/Await
async function fetchWithAsyncAwait() {
    try {
        const response = await fetch(apiUrl);
        if (!response.ok) throw new Error("Network issue encountered.");
        const data = await response.json();
        console.log("Task 7 (Async/Await) Title Received:", data.title);
    } catch (err) {
        console.error("Task 7 Error:", err);
    }
}

// Run functions
fetchWithPromises();
fetchWithAsyncAwait();

// Creating varied mockup promises
const p1 = new Promise(res => setTimeout(() => res("Value Alpha"), 1000));
const p2 = new Promise(res => setTimeout(() => res("Value Beta"), 2000));
const p3 = new Promise(res => setTimeout(() => res("Value Gamma"), 500));

// Task 8: Promise.all waiting for all values to resolve
Promise.all([p1, p2, p3])
    .then((results) => {
        console.log("Task 8 (Promise.all) collective values:", results);
        // Returns structured array containing all resolutions once everything concludes
    });

// Task 9: Promise.race grabbing the speediest completion
Promise.race([p1, p2, p3])
    .then((fastestValue) => {
        console.log("Task 9 (Promise.race) fastest value:", fastestValue);
        // Will output "Value Gamma" because it finishes quickest (500ms)
    });
