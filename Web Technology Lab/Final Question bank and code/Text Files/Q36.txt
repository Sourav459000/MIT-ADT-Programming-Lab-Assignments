<?php
session_start();

// Database connection
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "finaltest"; // Update this to your actual database name

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $rollNumber = $_POST["rollNumber"];
    $name = $_POST["name"];
    $city = $_POST["city"];
    $pinCode = $_POST["pinCode"];

    // Use prepared statement to prevent SQL injection
    $stmt = $conn->prepare("INSERT INTO students2 (rollNumber, name, city, pinCode) VALUES (?, ?, ?, ?)");
    $stmt->bind_param("ssss", $rollNumber, $name, $city, $pinCode);
    $stmt->execute();
}

// Display student records
$result = $conn->query("SELECT * FROM students2");
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Records</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            text-align: center;
            margin: 50px;
            background-color: #ecf0f1;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 20px;
        }
        table, th, td {
            border: 1px solid #3498db;
        }
        th, td {
            padding: 10px;
            text-align: left;
        }
        th {
            background-color: #3498db;
            color: #fff;
        }
    </style>
</head>
<body>
    <h2>Student Records</h2>

    <!-- Form to add student records -->
    <form action="" method="post">
        <label for="rollNumber">Roll Number:</label>
        <input type="text" id="rollNumber" name="rollNumber" required>

        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>

        <label for="city">City:</label>
        <input type="text" id="city" name="city" required>

        <label for="pinCode">Pin Code:</label>
        <input type="text" id="pinCode" name="pinCode" required>

        <button type="submit">Add Record</button>
    </form>

    <!-- Display student records in a table -->
    <?php
    if ($result->num_rows > 0) {
        echo "<table>";
        echo "<tr><th>ID</th><th>Roll Number</th><th>Name</th><th>City</th><th>Pin Code</th></tr>";
        while ($row = $result->fetch_assoc()) {
            echo "<tr>";
            echo "<td>{$row['id']}</td>";
            echo "<td>{$row['rollNumber']}</td>";
            echo "<td>{$row['name']}</td>";
            echo "<td>{$row['city']}</td>";
            echo "<td>{$row['pinCode']}</td>";
            echo "</tr>";
        }
        echo "</table>";
    } else {
        echo "<p>No records found.</p>";
    }

    // Close the database connection
    $conn->close();
    ?>
</body>
</html>
