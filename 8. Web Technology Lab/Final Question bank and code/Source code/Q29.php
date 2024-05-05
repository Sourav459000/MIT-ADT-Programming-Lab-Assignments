<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Square Root Calculator</title>
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
            width: 200px;
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

    <h2>Square Root Calculator</h2>

    <form action="" method="post">
        <label for="number">Enter a number:</label>
        <input type="number" id="number" name="number" min="0" step="any" required>
        <button type="submit">Calculate Square Root</button>
    </form>

    <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $number = $_POST["number"];
            $squareRoot = sqrt($number);

            echo "<p>The square root of $number is: $squareRoot</p>";
        }
    ?>

</body>
</html>
