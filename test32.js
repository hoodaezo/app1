// script.js
document.addEventListener('DOMContentLoaded', function() {
    const addToCartButtons = document.querySelectorAll('.product-card button');

    addToCartButtons.forEach(button => {
        button.addEventListener('click', function() {
            const product = this.parentElement;
            const productName = product.querySelector('h3').innerText;
            alert(`تمت إضافة ${productName} إلى السلة`);
        });
    });
});