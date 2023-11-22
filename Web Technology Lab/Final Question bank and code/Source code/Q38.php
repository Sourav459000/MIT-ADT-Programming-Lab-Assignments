<?php
// Database connection
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "finaltest";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Add Record to users1 Table
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["submit"])) {
    $userId = $_POST["userId"];
    $userName = $_POST["userName"];
    $password = $_POST["password"];

    $sql = "INSERT INTO users1 (user_id, user_name, password) VALUES ('$userId', '$userName', '$password')";

    if ($conn->query($sql) === TRUE) {
        echo "Record added successfully!";
    } else {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }
}

// Update User Password
if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["updatePassword"])) {
    $userIdToUpdate = $_POST["userIdToUpdate"];
    $newPassword = $_POST["newPassword"];

    $stmt = $conn->prepare("UPDATE users1 SET password = ? WHERE user_id = ?");
    $stmt->bind_param("ss", $newPassword, $userIdToUpdate);

    if ($stmt->execute()) {
        if ($stmt->affected_rows > 0) {
            $result = "Password updated successfully!";
        } else {
            $result = "No records were updated. User ID not found.";
        }
    } else {
        $result = "Error: " . $stmt->error;
    }

    $stmt->close();

    if ($conn->error) {
        echo "Database Error: " . $conn->error;
    }

    echo "Debugging Info: User ID - $userIdToUpdate, New Password - $newPassword";
}

// Close the database connection
$conn->close();
?>

<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Management</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            text-align: center;
            margin: 50px;
            background-color: #ecf0f1;
        }

        h2 {
            color: #3498db;
        }

        form {
            margin: 20px auto;
            width: 30%;
            background-color: #fff;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            border-radius: 8px;
            padding: 20px;
            box-sizing: border-box;
        }

        label {
            display: block;
            margin-bottom: 8px;
            color: #2c3e50;
        }

        input {
            width: calc(100% - 12px);
            padding: 8px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #3498db;
            border-radius: 5px;
        }

        button {
            padding: 12px 30px;
            font-size: 16px;
            cursor: pointer;
            background-color: #3498db;
            color: #fff;
            border: none;
            border-radius: 5px;
            transition: background-color 0.3s ease;
        }

        button:hover {
            background-color: #2980b9;
        }

        .result {
            margin-top: 20px;
            color: #27ae60;
        }
    </style>
</head>

<body>
    <h2>User Management</h2>

    <!-- Add Record Form -->
    <form action="" method="post">
        <label for="userId">User ID:</label>
        <input type="text" id="userId" name="userId" required>

        <label for="userName">User Name:</label>
        <input type="text" id="userName" name="userName" required>

        <label for="password">Password:</label>
        <input type="password" id="password" name="password" required>

        <button type="submit" name="submit">Add Record</button>
    </form>

    <!-- Update Password Form -->
    <form action="" method="post">
        <label for="userIdToUpdate">User ID to Update:</label>
        <input type="text" id="userIdToUpdate" name="userIdToUpdate" required>

        <label for="newPassword">New Password:</label>
        <input type="password" id="newPassword" name="newPassword" required>

        <button type="submit" name="updatePassword">Update Password</button>
    </form>

    <?php
    // Display results after adding or updating records
    if (isset($_POST["submit"]) || isset($_POST["updatePassword"])) {
        echo "<div class='result'>";
        echo "Result: " . $result;
        echo "</div>";
    }
    ?>
</body>

</html>