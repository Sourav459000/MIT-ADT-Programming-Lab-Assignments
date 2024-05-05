const colors = ["Red", "Green", "Blue"];
const userValue = prompt("Enter a color:");
if (!colors.includes(userValue)) {
  colors.push(userValue);
  alert(`${userValue} has been added to the array.`);
} else {
  alert(`${userValue} is already present in the array.`);
}
console.log("Updated array of colors:", colors);