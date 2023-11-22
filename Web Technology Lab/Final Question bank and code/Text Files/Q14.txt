<?php
session_start();

// Initialize the array if it doesn't exist
if (!isset($_SESSION['registeredCompanies'])) {
    $_SESSION['registeredCompanies'] = [];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Check if any of the fields are empty
    if (empty($_POST['companyID']) || empty($_POST['companyName']) || empty($_POST['location']) || empty($_POST['department']) || empty($_POST['registrationDate'])) {
        echo "All fields are compulsory. Please fill in all the details.";
    } else {
        $companyID = $_POST["companyID"];
        $companyName = $_POST["companyName"];
        $location = $_POST["location"];
        $department = $_POST["department"];
        $registrationDate = $_POST["registrationDate"];

        $companyData = [
            "companyID" => $companyID,
            "companyName" => $companyName,
            "location" => $location,
            "department" => $department,
            "registrationDate" => $registrationDate
        ];

        // Add the company data to the array
        $_SESSION['registeredCompanies'][] = $companyData;

        echo "<h2>Registered Company:</h2>";
        echo "<p>Company ID: {$companyData['companyID']}</p>";
        echo "<p>Company Name: {$companyData['companyName']}</p>";
        echo "<p>Location: {$companyData['location']}</p>";
        echo "<p>Department: {$companyData['department']}</p>";
        echo "<p>Registration Date: {$companyData['registrationDate']}</p>";
    }
}

if ($_SERVER["REQUEST_METHOD"] == "GET" && isset($_GET["searchDate"])) {
    $searchDate = $_GET["searchDate"];

    echo "<h2>Companies Registered Before $searchDate:</h2>";

    // Iterate through the registered companies and display matching ones
    foreach ($_SESSION['registeredCompanies'] as $company) {
        // Check if the "registrationDate" key exists in the array
        if (array_key_exists('registrationDate', $company) && strtotime($company["registrationDate"]) < strtotime($searchDate)) {
            echo "<p>";
            echo "Company ID: {$company['companyID']}<br>";
            echo "Company Name: {$company['companyName']}<br>";
            echo "Location: {$company['location']}<br>";
            echo "Department: {$company['department']}<br>";
            echo "Registration Date: {$company['registrationDate']}<br>";
            echo "</p>";
        }
    }
}
?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Company Registration</title>
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
    
    <h2>Company Registration</h2>
    
    <form action="" method="post">
        <table>
            <tr>
                <th>Field</th>
                <th>Value</th>
            </tr>
            <tr>
                <td>
                    <label for="companyID">Company ID:</label>
                </td>
                <td>
                    <input type="text" id="companyID" name="companyID" required>                    
                </td>
            </tr>
            <tr>
                <td>
                    <label for="companyName">Company Name:</label>
                </td>
                <td>
                    <input type="text" id="companyName" name="companyName" required>
                </td>
            </tr>
            <tr>
                <td>
                    <label for="location">Location:</label>
                </td>
                <td>
                    <input type="text" id="location" name="location" required>                    
                </td>
            </tr>
            <tr>
                <td>
                    <label for="department">Department:</label>
                </td>
                <td>
                    <input type="text" id="department" name="department" required>
                </td>
            </tr>
            <tr>
                <td>
                    <label for="registrationDate">Registration Date:</label>
                </td>
                <td>
                    <input type="date" id="registrationDate" name="registrationDate" required>
                </td>
            </tr>
        </table>
        <button type="submit">Register Company</button>
    </form>

    <form action="" method="get">
        <table>
            <tr>
                <th>Field</th>
                <th>Value</th>
            </tr>
            <tr>
                <td>
                    <label for="searchDate">Display Companies Registered Before:</label>
                </td>
                <td>
                    <input type="date" id="searchDate" name="searchDate" required>
                </td>
            </tr>
        </table>
        <button type="submit">Display Companies</button>
    </form>

</body>
</html>
