<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>String Transformations</title>
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

    <h2>String Transformations</h2>

    <form action="" method="post">
        <label for="inputString">Enter a string:</label>
        <input type="text" id="inputString" name="inputString" required>
        <button type="submit" name="uppercase">Uppercase</button>
        <button type="submit" name="lowercase">Lowercase</button>
        <button type="submit" name="firstUppercase">First Uppercase</button>
        <button type="submit" name="allWordsUppercase">All Words Uppercase</button>
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $inputString = $_POST["inputString"];

        if (isset($_POST["uppercase"])) {
            // a) transform a string to all uppercase letters
            $result = strtoupper($inputString);
        } elseif (isset($_POST["lowercase"])) {
            // b) transform a string to all lowercase letters
            $result = strtolower($inputString);
        } elseif (isset($_POST["firstUppercase"])) {
            // c) make a string's first character uppercase
            $result = ucfirst($inputString);
        } elseif (isset($_POST["allWordsUppercase"])) {
            // d) make a string's first character of all the words uppercase
            $result = ucwords($inputString);
        }

        echo "<p>Result: $result</p>";
    }
    ?>

</body>
</html>
