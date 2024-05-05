<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Temperature Conversion</title>
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

    <h2>Temperature Conversion</h2>

    <form action="" method="post">
        <label for="temperature">Enter Temperature (in Fahrenheit):</label>
        <input type="number" id="temperature" name="temperature" required>
        <button type="submit" name="toCelsius">Convert to Celsius</button>
        <button type="submit" name="toFahrenheit">Convert to Fahrenheit</button>
    </form>

    <?php
    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $temperature = $_POST["temperature"];

        if (isset($_POST["toCelsius"])) {
            // Convert Fahrenheit to Celsius
            $celsius = fahrenheitToCelsius($temperature);
            echo "<p>{$temperature}°F is equal to {$celsius}°C</p>";
        } elseif (isset($_POST["toFahrenheit"])) {
            // Convert Celsius to Fahrenheit
            $fahrenheit = celsiusToFahrenheit($temperature);
            echo "<p>{$temperature}°C is equal to {$fahrenheit}°F</p>";
        }
    }

    function fahrenheitToCelsius($fahrenheit) {
        return round(($fahrenheit - 32) * 5/9, 2);
    }

    function celsiusToFahrenheit($celsius) {
        return round(($celsius * 9/5) + 32, 2);
    }
    ?>

</body>
</html>
