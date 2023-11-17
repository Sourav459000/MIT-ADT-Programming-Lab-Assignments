const books = [
    { id: 1, title: 'Book 1', price: 10 },
    { id: 2, title: 'Book 2', price: 15 },
    { id: 3, title: 'Book 3', price: 20 },
];

const cart = [];

function displayBooks() {
    const bookList = document.getElementById('book-list');
    bookList.innerHTML = '';

    books.forEach(book => {
        const listItem = document.createElement('li');
        listItem.innerHTML = `${book.title} - $${book.price} <button onclick="addToCart(${book.id})">Add to Cart</button>`;
        bookList.appendChild(listItem);
    });
}

function addToCart(bookId) {
    const book = books.find(b => b.id === bookId);
    if (book) {
        const existingCartItem = cart.find(item => item.id === bookId);
        if (existingCartItem) {
            existingCartItem.quantity++;
        } else {
            cart.push({ ...book, quantity: 1 });
        }
        displayCart();
    }
}

function displayCart() {
    const cartList = document.getElementById('cart-list');
    const cartTotalElement = document.getElementById('cart-total');
    cartList.innerHTML = '';

    let total = 0;

    cart.forEach(item => {
        const listItem = document.createElement('li');
        const itemTotal = item.price * item.quantity;
        total += itemTotal;

        listItem.innerHTML = `${item.title} - $${item.price} - Quantity: ${item.quantity} - Total: $${itemTotal.toFixed(2)} <button onclick="removeFromCart(${item.id})">Remove</button>`;
        cartList.appendChild(listItem);
    });

    cartTotalElement.textContent = total.toFixed(2);
}


function removeFromCart(bookId) {
    const index = cart.findIndex(item => item.id === bookId);
    if (index !== -1) {
        if (cart[index].quantity > 1) {
            cart[index].quantity--;
        } else {
            cart.splice(index, 1);
        }
        displayCart();
    }
}

displayBooks();
displayCart();