function addRow() {
    var table = document.getElementById("myTable").getElementsByTagName('tbody')[0];
    var newRow = table.insertRow(table.rows.length);
    
    var nameInput = document.createElement("input");
    nameInput.type = "text";
    nameInput.placeholder = "Enter Name";

    var ageInput = document.createElement("input");
    ageInput.type = "text";
    ageInput.placeholder = "Enter Age";

    var cell1 = newRow.insertCell(0);
    var cell2 = newRow.insertCell(1);

    cell1.appendChild(nameInput);
    cell2.appendChild(ageInput);
}

document.getElementById("addRowButton").addEventListener("click", addRow);