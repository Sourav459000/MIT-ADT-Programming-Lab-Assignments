<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Student Results</title>
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
        label {
            display: block;
            margin-bottom: 8px;
            color: #2c3e50;
        }
        select, input, button {
            width: 100%;
            padding: 10px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #3498db;
            border-radius: 5px;
        }
        select {
            margin-bottom: 15px;
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

    <h2>Student Results</h2>

    <!-- Form to Display Results -->
    <form action="" method="post">
        <label for="passingYear">Select Passing Year:</label>
        <select id="passingYear" name="passingYear">
            <option value="2013">2013</option>
            <option value="2014">2014</option>
            <option value="2015">2015</option>
            <option value="2016">2016</option>
            <option value="2017">2017</option>
            <option value="2018">2018</option>
            <option value="2019">2019</option>
            <option value="2020">2020</option>
            <option value="2021">2021</option>
            <option value="2022">2022</option>
            <option value="2023">2023</option>
        </select>

        <label for="classGrade">Select Class Grade:</label>
        <select id="classGrade" name="classGrade">
            <option value="First Class">First Class</option>
            <option value="Second Class">Second Class</option>
            <option value="Pass">Pass</option>
            <option value="All">All</option>
        </select>

        <button type="submit" name="displayResults">Display Results</button>
    </form>

    <!-- Form to Enter Student Details -->
    <form action="" method="post">
        <label for="rollNo">Roll No:</label>
        <input type="text" id="rollNo" name="rollNo" required>

        <label for="studName">Student Name:</label>
        <input type="text" id="studName" name="studName" required>

        <label for="studDept">Department:</label>
        <input type="text" id="studDept" name="studDept" required>

        <label for="passingYearAdd">Passing Year:</label>
        <input type="number" id="passingYearAdd" name="passingYearAdd" required>

        <label for="classGradesAdd">Class Grade:</label>
        <select id="classGradesAdd" name="classGradesAdd" required>
            <option value="First Class">First Class</option>
            <option value="Second Class">Second Class</option>
            <option value="Pass">Pass</option>
        </select>

        <button type="submit" name="addStudent">Add Student</button>
    </form>

    <?php
    // PHP script to fetch and display results based on form submission
    if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["displayResults"])) {
        try {
            $passingYear = $_POST["passingYear"];
            $classGrade = $_POST["classGrade"];

            $pdo = new PDO("mysql:host=localhost;dbname=finaltest", "root");

            $query = "SELECT * FROM students WHERE passingYear = :passingYear AND (:classGrade = 'All' OR classGrades = :classGrade)";
            $stmt = $pdo->prepare($query);
            $stmt->bindParam(':passingYear', $passingYear, PDO::PARAM_INT);
            $stmt->bindParam(':classGrade', $classGrade, PDO::PARAM_STR);
            $stmt->execute();
            $results = $stmt->fetchAll(PDO::FETCH_ASSOC);

            if ($results) {
                echo "<table>";
                echo "<tr><th>Roll No</th><th>Student Name</th><th>Department</th><th>Passing Year</th><th>Class Grade</th></tr>";
                foreach ($results as $result) {
                    echo "<tr>";
                    echo "<td>{$result['rollNo']}</td>";
                    echo "<td>{$result['studName']}</td>";
                    echo "<td>{$result['studDept']}</td>";
                    echo "<td>{$result['passingYear']}</td>";
                    echo "<td>{$result['classGrades']}</td>";
                    echo "</tr>";
                }
                echo "</table>";
            } else {
                echo "<p>No results found.</p>";
            }
        } catch (PDOException $e) {
            echo "Error: " . $e->getMessage();
        }
    }

    // PHP script to handle form submission and database insertion (add_student.php)
    if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["addStudent"])) {
        try {
            $rollNo = $_POST["rollNo"];
            $studName = $_POST["studName"];
            $studDept = $_POST["studDept"];
            $passingYearAdd = $_POST["passingYearAdd"];
            $classGradesAdd = $_POST["classGradesAdd"];

            $pdo = new PDO("mysql:host=localhost;dbname=finaltest", "root");

            $query = "INSERT INTO students (rollNo, studName, studDept, passingYear, classGrades) VALUES (:rollNo, :studName, :studDept, :passingYear, :classGrades)";
            $stmt = $pdo->prepare($query);
            $stmt->bindParam(':rollNo', $rollNo, PDO::PARAM_INT);
            $stmt->bindParam(':studName', $studName, PDO::PARAM_STR);
            $stmt->bindParam(':studDept', $studDept, PDO::PARAM_STR);
            $stmt->bindParam(':passingYear', $passingYearAdd, PDO::PARAM_INT);
            $stmt->bindParam(':classGrades', $classGradesAdd, PDO::PARAM_STR);
            $stmt->execute();
        } catch (PDOException $e) {
            echo "Error: " . $e->getMessage();
        }
    }
    ?>

</body>
</html>
