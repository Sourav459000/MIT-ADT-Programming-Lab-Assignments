<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Factorial Calculator</title>
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
            margin-top: 20px;
            display: flex;
            flex-direction: column;
            align-items: center;
        }
        label {
            font-size: 18px;
            color: #2c3e50;
            margin-bottom: 8px;
        }
        input {
            width: 60px;
            padding: 10px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #3498db;
            border-radius: 8px;
            font-size: 16px;
        }
        button {
            padding: 12px 30px;
            font-size: 18px;
            cursor: pointer;
            background-color: #3498db;
            color: #fff;
            border: none;
            border-radius: 8px;
            transition: background-color 0.3s ease;
        }
        button:hover {
            background-color: #2980b9;
        }
        p {
            margin-top: 20px;
            font-size: 18px;
            color: #2c3e50;
        }
    </style>
</head>
<body>

    <h2>Factorial Calculator</h2>

    <form action="" method="post">
        <label for="number">Enter a number:</label>
        <input type="number" id="number" name="number" min="0" required>
        <button type="submit">Calculate Factorial</button>
    </form>

    <?php
        function calculateFactorial($n) {
            if ($n == 0 || $n == 1) {
                return 1;
            } else {
                return $n * calculateFactorial($n - 1);
            }
        }

        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $number = $_POST["number"];

            if ($number < 0) {
                echo "<p>Please enter a non-negative integer.</p>";
            } else {
                $factorial = calculateFactorial($number);
                echo "<p>The factorial of $number is $factorial.</p>";
            }
        }
    ?>

</body>
</html>
