function displayWelcomeMessage() {
    const name = document.getElementById("name").value;
    const welcomeMessage = `Hello ${name}! Welcome To World of JavaScript`;
    document.getElementById("output").innerText = welcomeMessage;
}

function performOperation(operation) {
    const num1 = Number(document.getElementById("num1").value);
    const num2 = Number(document.getElementById("num2").value);

    let result;

    switch (operation) {
        case "add":
            result = num1 + num2;
            break;
        case "subtract":
            result = num1 - num2;
            break;
        case "multiply":
            result = num1 * num2;
            break;
        case "divide":
            result = num1 / num2;
            break;
        default:
            result = "Invalid operation";
            break;
    }

    document.getElementById("result").innerText = `Result: ${result}`;
}