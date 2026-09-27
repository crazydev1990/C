let container = document.querySelector(".card-wrapper");

const products = async () => {
  const response = await fetch('https://dummyjson.com/recipes');
  const data = await response.json();
  console.log(data);
  
  let dataproducts = data.recipes;
  container.innerHTML = '';
  
  dataproducts.forEach((item) => {   
    container.innerHTML += `
      <div class="card">
        <img src="${item.image}" class="card-img" alt="${item.name}">
        <div class="card-content">
          <h3><strong>Name:</strong>${item.name}</h3><br><br>
          <p><strong>Ingredients:</strong><small>${item.ingredients}</small></p><br><br>
          <small><strong>Instructions:</strong>${item.instructions}</small> <br><br>
          <small><strong>Meal-Type:</strong>${item.mealType}</small> <br><br>
          <small><strong>Cuisine:</strong>${item.cuisine}</small> <br><br>
          <small><strong>Servings:</strong>${item.servings}</small> <br><br>
          <small><strong>Rating:</strong>${item.rating}</small> <br><br>
          <small><strong>Tags:</strong>${item.tags}</small> <br><br>
          <small><strong>Time:</strong>${item.cookTimeMinutes}</small> <br><br>
          <button><small>ADD TO CART</small></button>
        </div>
      </div>
    `;
  });
};

products();
