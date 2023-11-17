const colors = ["#FF5733", "#33FF57", "#5733FF", "#FF33AA", "#33AAFF"];

function changeBackgroundColor() {
    const body = document.body;
    const randomColor = colors[Math.floor(Math.random() * colors.length)];
    body.style.backgroundColor = randomColor;
}

const listItems = document.querySelectorAll("li");

listItems.forEach((item) => {
    item.addEventListener("click", changeBackgroundColor);
});