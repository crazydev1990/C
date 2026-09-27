// debugger
// var a
// let y
// // const z
// console.log(a);
// console.log(y);
// console.log(z);


// var a = 10
// let y = 20
// const z=30

// console.log(a);
// console.log(y);
// console.log(z);
// forEach()
// map()
// filter()
// reduce()
// for in
// for of

let container=document.querySelector(".card1")
console.log(container.innerHTML);

const products =async () => {
    let res = await fetch("https://dummyjson.com/products")
    let data = await res.json()
    dataproducts=data.products
    container.innerHTML=""
    dataproducts.forEach((product) => {
        // console.log(product);
        container.innerHTML += `
            <div class="card">
            <img src=${product.thumbnail}
                alt="">
            <div class="card-body">
                <h2>${product.title}</h2>
                <p>${product.description}</p>
                <button>Add to cart</button>
            </div>
        </div>
        
        `
    })
    // console.log(data.products[1].title);
    
}
products()


























