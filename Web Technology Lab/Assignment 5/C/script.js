var button = document.getElementById("myButton");
var isButtonActive = false;

button.addEventListener("click", function () {
    if (isButtonActive) {
        button.style.backgroundColor = "red";
        button.classList.remove("active");
    } else {
        button.style.backgroundColor = "green";
        button.classList.add("active");
    }
    isButtonActive = !isButtonActive;
});