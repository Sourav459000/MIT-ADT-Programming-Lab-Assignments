<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Employee Records</title>
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
        form {
            width: 50%;
            margin: 20px auto;
            background-color: #fff;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            border-radius: 8px;
            padding: 20px;
            box-sizing: border-box;
        }
        label {
            display: block;
            margin-bottom: 8px;
            color: #3498db;
            font-weight: bold;
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
    </style>
</head>
<body>
    <h2>Employee Records</h2>

    <!-- Form to add employee records -->
    <form action="" method="post">
        <label for="empNo">EMP No:</label>
        <input type="text" id="empNo" name="empNo" required>

        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>

        <label for="department">Department:</label>
        <input type="text" id="department" name="department" required>

        <label for="salary">Salary:</label>
        <input type="text" id="salary" name="salary" required>

        <button type="submit">Add Record</button>
    </form>

    <!-- Display employees with salary greater than 50000 Rs -->
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

    // Check if the form is submitted
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        // Process the form data and insert into the database
        $empNo = $_POST["empNo"];
        $name = $_POST["name"];
        $department = $_POST["department"];
        $salary = $_POST["salary"];

        $sql = "INSERT INTO employee_records (empNo, name, department, salary) VALUES ('$empNo', '$name', '$department', '$salary')";
        $conn->query($sql);
    }

    // Retrieve and display employees with salary greater than 50000 Rs
    $result = $conn->query("SELECT * FROM employee_records WHERE salary > 50000");

    if ($result->num_rows > 0) {
        echo "<table>";
        echo "<tr><th>ID</th><th>EMP No</th><th>Name</th><th>Department</th><th>Salary</th></tr>";
        while ($row = $result->fetch_assoc()) {
            echo "<tr>";
            echo "<td>{$row['id']}</td>";
            echo "<td>{$row['empNo']}</td>";
            echo "<td>{$row['name']}</td>";
            echo "<td>{$row['department']}</td>";
            echo "<td>{$row['salary']}</td>";
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
