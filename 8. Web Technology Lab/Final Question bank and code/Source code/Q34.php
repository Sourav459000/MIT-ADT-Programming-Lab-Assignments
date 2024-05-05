<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Integer Operations</title>
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
            width: 300px;
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
            margin-bottom: 10px;
            transition: background-color 0.3s ease;
        }
        button:hover {
            background-color: #2980b9;
        }
        p {
            font-size: 18px;
            color: #2c3e50;
        }
    </style>
</head>
<body>

    <h2>Integer Operations</h2>

    <form action="" method="post">
        <label for="number">Enter a positive integer:</label>
        <input type="number" id="number" name="number" required>
        <button type="submit" name="reverse">Reverse Digits</button>
        <button type="submit" name="powerOfFour">Check Power of Four</button>
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $number = $_POST["number"];

        if (isset($_POST["reverse"])) {
            // A) Reverse the digits of an integer
            $reversedNumber = intval(strrev($number));
            echo "<p>Reversed Digits: $reversedNumber</p>";
        } elseif (isset($_POST["powerOfFour"])) {
            // B) Check whether a given positive integer is a power of four
            $result = isPowerOfFour($number);
            echo "<p>$number is " . ($result ? "" : "not ") . "a power of four.</p>";
        }
    }

    function isPowerOfFour($n) {
        return ($n > 0) && (($n & ($n - 1)) == 0) && (($n - 1) % 3 == 0);
    }
    ?>

</body>
</html>
