<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Electricity Bill Calculator</title>
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
            width: 160px;
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

    <h2>Electricity Bill Calculator</h2>

    <form action="" method="post">
        <label for="units">Enter the number of units consumed:</label>
        <input type="number" id="units" name="units" min="0" required>
        <button type="submit">Calculate Bill</button>
    </form>

    <?php
        if ($_SERVER["REQUEST_METHOD"] == "POST") {
            $units = $_POST["units"];
            $totalBill = 0;

            if ($units <= 50) {
                $totalBill = $units * 3.5;
            } elseif ($units <= 150) {
                $totalBill = 50 * 3.5 + ($units - 50) * 4;
            } elseif ($units <= 250) {
                $totalBill = 50 * 3.5 + 100 * 4 + ($units - 150) * 5.2;
            } else {
                $totalBill = 50 * 3.5 + 100 * 4 + 100 * 5.2 + ($units - 250) * 6.5;
            }

            echo "<p>The total electricity bill for $units units is Rs. $totalBill</p>";
        }
    ?>

</body>
</html>
