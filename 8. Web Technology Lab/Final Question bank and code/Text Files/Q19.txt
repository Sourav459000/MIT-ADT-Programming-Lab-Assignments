<?php
session_start();

// Database configuration
$servername = "localhost";
$username = "root";
$dbname = "finaltest";

try {
    // Create connection
    $pdo = new PDO("mysql:host=$servername;dbname=$dbname", $username);
    // Set the PDO error mode to exception
    $pdo->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
} catch (PDOException $e) {
    die("Connection failed: " . $e->getMessage());
}

// Initialize the array if it doesn't exist
if (!isset($_SESSION['studentData'])) {
    $_SESSION['studentData'] = [];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Check if any of the fields are empty
    if (empty($_POST['studentID']) || empty($_POST['studentName']) || empty($_POST['emailID']) || empty($_POST['12thGrade']) || empty($_POST['JEEScore']) || empty($_POST['Department'])) {
        echo "All fields are compulsory. Please fill in all the details.";
    } else {
        $studentID = $_POST["studentID"];
        $studentName = $_POST["studentName"];
        $emailID = $_POST["emailID"];
        $twelfthGrade = $_POST["12thGrade"];
        $jeeScore = $_POST["JEEScore"];
        $department = $_POST["Department"];

        $studentData = [
            "studentID" => $studentID,
            "studentName" => $studentName,
            "emailID" => $emailID,
            "12thGrade" => $twelfthGrade,
            "JEEScore" => $jeeScore,
            "Department" => $department
        ];

        // Add the student data to the array
        $_SESSION['studentData'][] = $studentData;

        try {
            // Insert student data into the database
            $stmt = $pdo->prepare("INSERT INTO student1 (studentID, studentName, emailID, 12thGrade, JEEScore, Department) VALUES (:studentID, :studentName, :emailID, :twelfthGrade, :jeeScore, :department)");
            $stmt->bindParam(':studentID', $studentID, PDO::PARAM_STR);
            $stmt->bindParam(':studentName', $studentName, PDO::PARAM_STR);
            $stmt->bindParam(':emailID', $emailID, PDO::PARAM_STR);
            $stmt->bindParam(':twelfthGrade', $twelfthGrade, PDO::PARAM_STR);
            $stmt->bindParam(':jeeScore', $jeeScore, PDO::PARAM_INT);
            $stmt->bindParam(':department', $department, PDO::PARAM_STR);
            $stmt->execute();
        } catch (PDOException $e) {
            echo "Error: " . $e->getMessage();
        }

        echo "<h2>Registered Student:</h2>";
        echo "<p>Student ID: {$studentData['studentID']}</p>";
        echo "<p>Student Name: {$studentData['studentName']}</p>";
        echo "<p>Email ID: {$studentData['emailID']}</p>";
        echo "<p>12th Grade: {$studentData['12thGrade']}</p>";
        echo "<p>JEE Score: {$studentData['JEEScore']}</p>";
        echo "<p>Department: {$studentData['Department']}</p>";
    }
}

// Display top 5 students based on JEE Score
if ($_SESSION['studentData']) {
    // Sort the array based on JEE Score in descending order
    usort($_SESSION['studentData'], function ($a, $b) {
        return $b['JEEScore'] - $a['JEEScore'];
    });

    echo "<h2>Top 5 Students Based on JEE Score:</h2>";

    // Display the top 5 students
    for ($i = 0; $i < min(5, count($_SESSION['studentData'])); $i++) {
        echo "<p>";
        echo "Rank: " . ($i + 1) . "<br>";
        echo "Student ID: {$_SESSION['studentData'][$i]['studentID']}<br>";
        echo "Student Name: {$_SESSION['studentData'][$i]['studentName']}<br>";
        echo "Email ID: {$_SESSION['studentData'][$i]['emailID']}<br>";
        echo "12th Grade: {$_SESSION['studentData'][$i]['12thGrade']}<br>";
        echo "JEE Score: {$_SESSION['studentData'][$i]['JEEScore']}<br>";
        
        // Check if 'Department' key exists before trying to access it
        if (isset($_SESSION['studentData'][$i]['Department'])) {
            echo "Department: {$_SESSION['studentData'][$i]['Department']}<br>";
        } else {
            echo "Department: Not specified<br>";
        }

        echo "</p>";
    }
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Admission Form</title>
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
            width: 50%;
            background-color: #fff;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            border-radius: 8px;
            padding: 20px;
            box-sizing: border-box;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-bottom: 15px;
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
    </style>
</head>
<body>
    
    <h2>Student Admission Form</h2>
    
    <form action="" method="post">
        <table>
            <tr>
                <th>Field</th>
                <th>Value</th>
            </tr>
            <tr>
                <td>
                    <label for="studentID">Student ID:</label>
                </td>
                <td>
                    <input type="text" id="studentID" name="studentID" required>                    
                </td>
            </tr>
            <tr>
                <td>
                    <label for="studentName">Student Name:</label>
                </td>
                <td>
                    <input type="text" id="studentName" name="studentName" required>
                </td>
            </tr>
            <tr>
                <td>
                    <label for="emailID">Email ID:</label>
                </td>
                <td>
                    <input type="email" id="emailID" name="emailID" required>                    
                </td>
            </tr>
            <tr>
                <td>
                    <label for="12thGrade">12th Grade:</label>
                </td>
                <td>
                    <input type="text" id="12thGrade" name="12thGrade" required>
                </td>
            </tr>
            <tr>
                <td>
                    <label for="JEEScore">JEE Score:</label>
                </td>
                <td>
                    <input type="number" id="JEEScore" name="JEEScore" required>
                </td>
            </tr>
            <tr>
                <td>
                    <label for="Department">Department:</label>
                </td>
                <td>
                    <input type="text" id="Department" name="Department" required>
                </td>
            </tr>
        </table>
        <button type="submit">Register Student</button>
    </form>

</body>
</html>
