const heading = document.getElementById("heading");
const fontColorSelect = document.getElementById("fontColor");
const bgColorSelect = document.getElementById("bgColor");

function applyStyles() {
  const selectedFontColor = fontColorSelect.value;
  const selectedBgColor = bgColorSelect.value;
  
  if (selectedFontColor === selectedBgColor) {
    alert("Font color and background color are the same. No changes applied.");
    return;
  }
  
  heading.style.color = selectedFontColor;
  heading.style.backgroundColor = selectedBgColor;
}

fontColorSelect.addEventListener("change", applyStyles);
bgColorSelect.addEventListener("change", applyStyles);