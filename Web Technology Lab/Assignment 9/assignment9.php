<!DOCTYPE html>
<html>
<head>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #f5f5f5;
            margin: 0;
            padding: 0;
            text-align: center;
        }

        h1 {
            background-color: #3498db;
            color: #fff;
            padding: 10px;
        }

        form {
            margin: 20px auto;
            width: 50%;
            background-color: #fff;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.2);
        }

        label {
            display: block;
            margin-bottom: 10px;
            font-size: 18px;
        }

        input[type="number"] {
            width: 100%;
            padding: 10px;
            font-size: 16px;
            margin-bottom: 15px;
            border: 1px solid #ccc;
            border-radius: 5px;
        }

        input[type="submit"] {
            background-color: #3498db;
            color: #fff;
            border: none;
            padding: 10px 20px;
            font-size: 18px;
            cursor: pointer;
        }

        div.result {
            margin: 20px 0;
            padding: 10px;
            border-radius: 5px;
        }
    </style>
</head>
<body>
    <h1>Student Grade Checker</h1>
    <form method="post">
        <label for="marks">Enter Marks:</label>
        <input type="number" name="marks" id="marks" required>
        <input type="submit" name="checkGrade" value="Check Grade">
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["checkGrade"])) {
        $marks = $_POST["marks"];

        if ($marks >= 60) {
            $grade = "First Division";
        } elseif ($marks >= 45 && $marks <= 59) {
            $grade = "Second Division";
        } elseif ($marks >= 33 && $marks <= 44) {
            $grade = "Third Division";
        } else {
            $grade = "Fail";
        }

        echo '<div class="result">';
        echo "<strong>Result:</strong> $grade";
        echo '</div>';
    }
    ?>
</body>
</html>
