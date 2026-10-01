const ApiUrl = "https://www.swiggy.com/dapi/restaurants/list/v5?lat=23.02760&lng=72.58710&is-seo-homepage-enabled=true&page_type=DESKTOP_WEB_LISTING_UPDATE";
const mindFlex = document.getElementById("mind-flex");
const container = document.getElementById("top-flex");
const delContainer = document.getElementById("del-flex");

const api=async()=>{
    const res=await fetch(ApiUrl);
    const data=await res.json();
    console.log(data);
    mindFlex.innerHTML='';
    container.innerHTML='';
    delContainer.innerHTML='';

    // let whatsOnYourMind = data.data.cards[0].card.card.imageGridCards.info;
    // console.log(whatsOnYourMind);
    // whatsOnYourMind.forEach((element)=>{
    //     mindFlex.innerHTML+=`        
    //         <div class="mind-item" style="cursor:pointer;flex:0 0 144px;text-align:center;">
    //            <img src="https://media-assets.swiggy.com/swiggy/image/upload/fl_lossy,f_auto,q_auto,w_660/${element.imageId}" style="width:100%;height:100%;object-fit:contain;">
    //         </div>         
    //     `;
    // });
let whatsOnYourMind = data.data.cards[0].card.card.imageGridCards.info;
console.log(whatsOnYourMind);
mindFlex.innerHTML = "";
whatsOnYourMind.forEach((element) => {
    mindFlex.innerHTML += `        
        <div class="mind-item" style="cursor:pointer;">
           <img src="https://media-assets.swiggy.com/swiggy/image/upload/fl_lossy,f_auto,q_auto,w_660/${element.imageId}" style="width:100%; height:100%; object-fit:contain;" alt="food item">
        </div>         
    `;
});

 
    let swiggy = data.data.cards[1].card.card.gridElements.infoWithStyle.restaurants;
    console.log(swiggy);
    swiggy.forEach((restaurant)=>{
        container.innerHTML+=`
        <div class="card" style="cursor:pointer;width:calc(25% - 24px);min-width:240px;font-family:sans-serif;">
            <div style="width:100%;aspect-ratio:16/10;border-radius:16px;overflow:hidden;background:#e2e8f0;">
                <img src="https://media-assets.swiggy.com/swiggy/image/upload/fl_lossy,f_auto,q_auto,w_660/${restaurant.info.cloudinaryImageId}" style="width:100%;height:100%;object-fit:cover;">
            </div>
            <div style="padding:12px 8px 0 8px;">
                <div style="font-size:18px;font-weight:700;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;margin-bottom:4px;color:#02060c;">${restaurant.info.name}</div>
                <div style="display:flex;align-items:center;gap:8px;font-size:16px;font-weight:700;margin-bottom:4px;color:#02060c;">
                    <span style="background:#257a3e;color:#fff;padding:2px 6px;border-radius:12px;font-size:12px;font-weight:800;">★ ${restaurant.info.avgRating || 'NEW'}</span>
                    <span>• ${restaurant.info.sla.slaString}</span>
                </div>
                <div style="font-size:14px;color:#02060c99;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;">${restaurant.info.cuisines.join(', ')}</div>
            </div>
        </div>
        `;
    });

    let onlineDelivery = data.data.cards[4].card.card.gridElements.infoWithStyle.restaurants;
    console.log(onlineDelivery);
    onlineDelivery.forEach((restaurant)=>{
        delContainer.innerHTML+=`
        <div class="card" style="cursor:pointer;width:calc(25% - 24px);min-width:240px;font-family:sans-serif;">
            <div style="width:100%;aspect-ratio:16/10;border-radius:16px;overflow:hidden;background:#e2e8f0;">
                <img src="https://media-assets.swiggy.com/swiggy/image/upload/fl_lossy,f_auto,q_auto,w_660/${restaurant.info.cloudinaryImageId}" style="width:100%;height:100%;object-fit:cover;">
            </div>
            <div style="padding:12px 8px 0 8px;">
                <div style="font-size:18px;font-weight:700;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;margin-bottom:4px;color:#02060c;">${restaurant.info.name}</div>
                <div style="display:flex;align-items:center;gap:8px;font-size:16px;font-weight:700;margin-bottom:4px;color:#02060c;">
                    <span style="background:#257a3e;color:#fff;padding:2px 6px;border-radius:12px;font-size:12px;font-weight:800;">★ ${restaurant.info.avgRating || 'NEW'}</span>
                    <span>• ${restaurant.info.sla.slaString}</span>
                </div>
                <div style="font-size:14px;color:#02060c99;overflow:hidden;text-overflow:ellipsis;white-space:nowrap;">${restaurant.info.cuisines.join(', ')}</div>
            </div>
        </div>
        `;
    });
}
api();

const toggleSwitch = document.getElementById('toggleSwitch');
const statusText = document.getElementById('statusText');
//statusText.style.visibility = 'hidden';

toggleSwitch.addEventListener('change', function() {
  if (this.checked) {
    statusText.textContent = 'Dark Mode is ON';
    document.querySelector('.container').style.backgroundColor = '#000';
    document.querySelector('.container').style.color = '#fff';
  } else {
    statusText.textContent = 'Dark Mode is OFF';
    document.querySelector('.container').style.backgroundColor = '#fff';
    document.querySelector('.container').style.color = '#000';
  }
});
