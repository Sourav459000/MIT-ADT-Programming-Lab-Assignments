<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Day of the Week</title>
    <style>
        body {
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            text-align: center;
            margin: 50px;
            background-color: #3498db;
            color: #fff;
        }
        h2 {
            color: #ecf0f1;
        }
        form {
            margin-top: 20px;
        }
        label {
            display: block;
            margin-bottom: 8px;
            color: #ecf0f1;
        }
        input {
            width: 200px;
            padding: 10px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #ecf0f1;
            border-radius: 8px;
            background-color: #ecf0f1;
            color: #3498db;
        }
        button {
            padding: 12px 30px;
            font-size: 16px;
            cursor: pointer;
            background-color: #ecf0f1;
            color: #3498db;
            border: none;
            border-radius: 8px;
            transition: background-color 0.3s ease, color 0.3s ease;
        }
        button:hover {
            background-color: #2980b9;
            color: #fff;
        }
        p {
            margin-top: 20px;
            color: #ecf0f1;
        }
    </style>
</head>
<body>

    <h2>Day of the Week</h2>

    <form action="" method="post">
        <label for="dayNumber">Enter a number (1 to 7):</label>
        <input type="number" id="dayNumber" name="dayNumber" min="1" max="7" required>
        <button type="submit">Show Day</button>
    </form>

    <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $dayNumber = $_POST["dayNumber"];

            switch ($dayNumber) {
                case 1:
                    echo "<p>Day $dayNumber is Monday.</p>";
                    break;
                case 2:
                    echo "<p>Day $dayNumber is Tuesday.</p>";
                    break;
                case 3:
                    echo "<p>Day $dayNumber is Wednesday.</p>";
                    break;
                case 4:
                    echo "<p>Day $dayNumber is Thursday.</p>";
                    break;
                case 5:
                    echo "<p>Day $dayNumber is Friday.</p>";
                    break;
                case 6:
                    echo "<p>Day $dayNumber is Saturday.</p>";
                    break;
                case 7:
                    echo "<p>Day $dayNumber is Sunday.</p>";
                    break;
                default:
                    echo "<p>Invalid number. Please enter a number between 1 and 7.</p>";
            }
        }
    ?>

</body>
</html>
