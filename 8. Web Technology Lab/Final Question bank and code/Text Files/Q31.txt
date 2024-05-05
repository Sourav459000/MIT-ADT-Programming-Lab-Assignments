<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Palindrome Checker</title>
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

    <h2>Palindrome Checker</h2>

    <form action="" method="post">
        <label for="inputString">Enter a string:</label>
        <input type="text" id="inputString" name="inputString" required>
        <button type="submit">Check Palindrome</button>
    </form>

    <?php
    function isPalindrome($str) {
        $str = strtolower(preg_replace('/[^a-zA-Z0-9]/', '', $str));
        return $str === strrev($str);
    }

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $inputString = $_POST["inputString"];

        if (isPalindrome($inputString)) {
            echo "<p>'$inputString' is a palindrome.</p>";
        } else {
            echo "<p>'$inputString' is not a palindrome.</p>";
        }
    }
    ?>

</body>
</html>
