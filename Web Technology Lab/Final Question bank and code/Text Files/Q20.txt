<?php
session_start();

// Database connection
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "finaltest";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

// Check if the form is submitted
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST["username"];
    $password = $_POST["password"];

    // Use prepared statement to prevent SQL injection
    $stmt = $conn->prepare("SELECT * FROM users WHERE username = ? AND password = ?");
    $stmt->bind_param("ss", $username, $password);
    $stmt->execute();
    $result = $stmt->get_result();

    if ($result->num_rows > 0) {
        $_SESSION["username"] = $username;
        header("Location: Q20.php");
        exit();
    } else {
        $error = "Invalid username or password.";
    }
}

// Logout functionality
if (isset($_GET["logout"])) {
    session_destroy();
    header("Location: Q20.php");
    exit();
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>User Authentication System</title>
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
        .error {
            color: #e74c3c;
            margin-top: 10px;
        }
        .welcome {
            margin: 20px;
        }
        a {
            text-decoration: none;
            color: #3498db;
        }
    </style>
</head>
<body>
    <?php
    if (isset($_SESSION["username"])) {
        // Welcome page
        echo "<div class='welcome'>";
        echo "<h2>Welcome, {$_SESSION["username"]}!</h2>";
        echo "<p>You have successfully logged in.</p>";
        echo "<a href='index.php?logout'><button>Logout</button></a>";
        echo "</div>";
    } else {
        // Login page
        echo "<h2>Login Page</h2>";
        echo "<form action='' method='post'>";
        echo "<label for='username'>Username:</label>";
        echo "<input type='text' id='username' name='username' required>";
        echo "<label for='password'>Password:</label>";
        echo "<input type='password' id='password' name='password' required>";
        echo "<button type='submit'>Login</button>";
        echo "</form>";
        if (isset($error)) {
            echo "<p class='error'>$error</p>";
        }
    }
    ?>
</body>
</html>
