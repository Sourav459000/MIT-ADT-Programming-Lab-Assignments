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

        input[type="text"], input[type="number"] {
            width: 100%;
            padding: 10px;
            font-size: 16px;
            margin-bottom: 15px;
            border: 1px solid #ccc;
            border-radius: 5px;
        }

        input[type="submit"], input[type="button"] {
            background-color: #3498db;
            color: #fff;
            border: none;
            padding: 10px 20px;
            font-size: 18px;
            cursor: pointer;
            margin-right: 10px;
        }

        input[type="button"] {
            background-color: #e74c3c;
        }

        ul {
            list-style-type: none;
            padding: 0;
        }

        li {
            background-color: #f2f2f2;
            margin: 5px 0;
            padding: 10px;
            border-radius: 5px;
        }
    </style>
</head>
<body>
    <h1>Shopping Application</h1>
    <form method="post">
        <table>
            <tr>
                <td><label for="itemID">Item ID:</label></td>
                <td><input type="text" name="itemID" id="itemID" required></td>
            </tr>
            <tr>
                <td><label for="itemName">Item Name:</label></td>
                <td><input type="text" name="itemName" id="itemName" required></td>
            </tr>
            <tr>
                <td><label for="itemQuantity">Item Quantity:</label></td>
                <td><input type="number" name="itemQuantity" id="itemQuantity" required></td>
            </tr>
            <tr>
                <td></td>
                <td>
                    <input type="submit" name="addItem" value="Add Item">
                </td>
            </tr>
        </table>
    </form>

    <form method="post">
        <table>
            <tr>
                <td><label for="itemIDToDelete">Item ID to Delete:</label></td>
                <td><input type="text" name="itemIDToDelete" id="itemIDToDelete" required></td>
                <td><input type="submit" name="deleteItem" value="Delete Item"></td>
            </tr>
        </table>
    </form>

    <form method="post">
        <table>
            <tr>
                <td><label for="itemIDToDisplay">Item ID to Display:</label></td>
                <td><input type="text" name="itemIDToDisplay" id="itemIDToDisplay" required></td>
                <td><input type="submit" name="displayItem" value="Display Item"></td>
            </tr>
        </table>
    </form>

    <?php
    session_start();

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        if (isset($_POST["addItem"])) {
            $itemID = $_POST["itemID"];
            $itemName = $_POST["itemName"];
            $itemQuantity = $_POST["itemQuantity"];

            if (!empty($itemID) && !empty($itemName) && is_numeric($itemQuantity)) {
                $newItem = array(
                    'itemID' => $itemID,
                    'itemName' => $itemName,
                    'itemQuantity' => $itemQuantity
                );

                if (!isset($_SESSION['items'])) {
                    $_SESSION['items'] = array();
                }

                $isDuplicate = false;
                foreach ($_SESSION['items'] as $item) {
                    if ($item['itemID'] === $itemID) {
                        $isDuplicate = true;
                        break;
                    }
                }

                if (!$isDuplicate) {
                    $_SESSION['items'][] = $newItem;
                } else {
                    echo "<p style='color: red;'>Item with the same ID already exists.</p>";
                }
            }
        } elseif (isset($_POST["deleteItem"])) {
            $itemIDToDelete = $_POST["itemIDToDelete"];

            if (isset($_SESSION['items'])) {
                foreach ($_SESSION['items'] as $key => $item) {
                    if ($item['itemID'] === $itemIDToDelete) {
                        unset($_SESSION['items'][$key]);
                    }
                }
            }
        } elseif (isset($_POST["displayItem"])) {
            $itemIDToDisplay = $_POST["itemIDToDisplay"];
            
            if (isset($_SESSION['items'])) {
                foreach ($_SESSION['items'] as $item) {
                    if ($item['itemID'] === $itemIDToDisplay) {
                        echo "<h2>Item with ID $itemIDToDisplay:</h2>";
                        echo "<ul>";
                        echo "<li><strong>Item ID:</strong> " . $item['itemID'] . "</li>";
                        echo "<li><strong>Item Name:</strong> " . $item['itemName'] . "</li>";
                        echo "<li><strong>Item Quantity:</strong> " . $item['itemQuantity'] . "</li>";
                        echo "</ul>";
                        break;
                    }
                }
            }
        }
    }

    if (isset($_SESSION['items'])) {
        echo "<h2>Added Items:</h2>";
        echo "<ul>";
        foreach ($_SESSION['items'] as $item) {
            echo "<li><strong>Item ID:</strong> " . $item['itemID'] . "</li>";
            echo "<li><strong>Item Name:</strong> " . $item['itemName'] . "</li>";
            echo "<li><strong>Item Quantity:</strong> " . $item['itemQuantity'] . "</li>";
            echo "</ul>";
        }
    }
    ?>
</body>
</html>
