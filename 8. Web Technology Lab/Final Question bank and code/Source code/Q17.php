<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student-Mentor Meeting Records</title>
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
        form, table {
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
            color: #2c3e50;
        }
        input, textarea, button, select {
            width: 100%;
            padding: 10px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #3498db;
            border-radius: 5px;
        }
        button {
            background-color: #3498db;
            color: #fff;
            cursor: pointer;
            transition: background-color 0.3s ease;
        }
        button:hover {
            background-color: #2980b9;
        }
        table, th, td {
            border: 1px solid #3498db;
            border-collapse: collapse;
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

    <h2>Student-Mentor Meeting Records</h2>

    <!-- Insert Record Form -->
    <form action="" method="post">
        <label for="studRollNo">Student Roll No:</label>
        <input type="number" id="studRollNo" name="studRollNo" required>

        <label for="studClass">Student Class:</label>
        <input type="text" id="studClass" name="studClass" required>

        <label for="studName">Student Name:</label>
        <input type="text" id="studName" name="studName" required>

        <label for="studContact">Student Contact:</label>
        <input type="text" id="studContact" name="studContact" required>

        <label for="mentorName">Mentor Name:</label>
        <input type="text" id="mentorName" name="mentorName" required>

        <label for="issuesDiscussed">Issues Discussed:</label>
        <textarea id="issuesDiscussed" name="issuesDiscussed" rows="4" required></textarea>

        <label for="meetingDate">Meeting Date:</label>
        <input type="date" id="meetingDate" name="meetingDate" required>

        <button type="submit" name="insertRecord">Insert Record</button>
    </form>

    <!-- Display Absent Students -->
    <table>
        <caption><h2>Absent Students</h2></caption>
        <tr>
            <th>Student Roll No</th>
            <th>Student Class</th>
            <th>Student Name</th>
            <th>Meeting Date</th>
        </tr>

        <?php
        // PHP script to handle form submission and database insertion
        if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["insertRecord"])) {
            try {
                $studRollNo = $_POST["studRollNo"];
                $studClass = $_POST["studClass"];
                $studName = $_POST["studName"];
                $studContact = $_POST["studContact"];
                $mentorName = $_POST["mentorName"];
                $issuesDiscussed = $_POST["issuesDiscussed"];
                $meetingDate = $_POST["meetingDate"];

                $pdo = new PDO("mysql:host=localhost;dbname=finaltest", "root");

                $query = "INSERT INTO Student_Mentor (studRollNo, studClass, studName, studContact, mentorName, issuesDiscussed, meetingDate) 
                          VALUES (:studRollNo, :studClass, :studName, :studContact, :mentorName, :issuesDiscussed, :meetingDate)";
                $stmt = $pdo->prepare($query);
                $stmt->bindParam(':studRollNo', $studRollNo, PDO::PARAM_INT);
                $stmt->bindParam(':studClass', $studClass, PDO::PARAM_STR);
                $stmt->bindParam(':studName', $studName, PDO::PARAM_STR);
                $stmt->bindParam(':studContact', $studContact, PDO::PARAM_STR);
                $stmt->bindParam(':mentorName', $mentorName, PDO::PARAM_STR);
                $stmt->bindParam(':issuesDiscussed', $issuesDiscussed, PDO::PARAM_STR);
                $stmt->bindParam(':meetingDate', $meetingDate);
                $stmt->execute();

                echo "<p>Record inserted successfully!</p>";
            } catch (PDOException $e) {
                echo "Error: " . $e->getMessage();
            }
        }

        // Display Absent Students
        try {
            $pdo = new PDO("mysql:host=localhost;dbname=finaltest", "root");

            $query = "SELECT * FROM Student_Mentor WHERE meetingDate < CURRENT_DATE";
            $stmt = $pdo->query($query);
            $results = $stmt->fetchAll(PDO::FETCH_ASSOC);

            if ($results) {
                foreach ($results as $result) {
                    echo "<tr>";
                    echo "<td>{$result['studRollNo']}</td>";
                    echo "<td>{$result['studClass']}</td>";
                    echo "<td>{$result['studName']}</td>";
                    echo "<td>{$result['meetingDate']}</td>";
                    echo "</tr>";
                }
            } else {
                echo "<tr><td colspan='4'>No absent students found.</td></tr>";
            }
        } catch (PDOException $e) {
            echo "Error: " . $e->getMessage();
        }
        ?>
    </table>

</body>
</html>
