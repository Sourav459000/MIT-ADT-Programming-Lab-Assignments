<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Sports Registration</title>
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
            width: 50%;
            margin: 20px auto;
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
        input, select, button {
            width: 100%;
            padding: 10px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #3498db;
            border-radius: 5px;
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
            width: 50%;
            margin: 20px auto;
            border-collapse: collapse;
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

    <h2>Sports Registration</h2>

    <!-- Sports Registration Form -->
    <form action="" method="post">
        <label for="playerName">Player Name:</label>
        <input type="text" id="playerName" name="playerName" required>

        <label for="gameGenre">Game Genre:</label>
        <select id="gameGenre" name="gameGenre" required>
            <option value="cricket">Cricket</option>
            <option value="football">Football</option>
            <option value="tennis">Tennis</option>
            <!-- Add more options as needed -->
        </select>

        <label for="score">Score:</label>
        <input type="number" id="score" name="score" required>

        <button type="submit" name="registerPlayer">Register Player</button>
    </form>

    <?php
    // PHP script to handle form submission and display players with the highest score in cricket
    if ($_SERVER["REQUEST_METHOD"] == "POST" && isset($_POST["registerPlayer"])) {
        try {
            $playerName = $_POST["playerName"];
            $gameGenre = $_POST["gameGenre"];
            $score = $_POST["score"];

            $pdo = new PDO("mysql:host=localhost;dbname=finaltest", "root");

            $query = "INSERT INTO sports_registration (playerName, gameGenre, score) VALUES (:playerName, :gameGenre, :score)";
            $stmt = $pdo->prepare($query);
            $stmt->bindParam(':playerName', $playerName, PDO::PARAM_STR);
            $stmt->bindParam(':gameGenre', $gameGenre, PDO::PARAM_STR);
            $stmt->bindParam(':score', $score, PDO::PARAM_INT);
            $stmt->execute();

            echo "<p>Player registered successfully!</p>";
        } catch (PDOException $e) {
            echo "Error: " . $e->getMessage();
        }
    }

    // Display players with the highest score in cricket
    try {
        $pdo = new PDO("mysql:host=localhost;dbname=finaltest", "root");

        $query = "SELECT * FROM sports_registration WHERE gameGenre = 'cricket' ORDER BY score DESC LIMIT 1";
        $stmt = $pdo->query($query);
        $result = $stmt->fetch(PDO::FETCH_ASSOC);

        if ($result) {
            echo "<table>";
            echo "<tr><th>Player Name</th><th>Game Genre</th><th>Score</th></tr>";
            echo "<tr>";
            echo "<td>{$result['playerName']}</td>";
            echo "<td>{$result['gameGenre']}</td>";
            echo "<td>{$result['score']}</td>";
            echo "</tr>";
            echo "</table>";
        } else {
            echo "<p>No players found for cricket.</p>";
        }
    } catch (PDOException $e) {
        echo "Error: " . $e->getMessage();
    }
    ?>

</body>
</html>
