<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Array Sorting</title>
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
        table {
            margin: 20px auto;
            border-collapse: collapse;
            width: 40%;
            background-color: #fff;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            border-radius: 8px;
        }
        th, td {
            padding: 15px;
            text-align: center;
            border: 1px solid #ddd;
        }
        th {
            background-color: #3498db;
            color: #fff;
            width: 200px;
        }
        .nested-table {
            width: 100%;
            border-collapse: collapse;
            margin-top: 10px;
        }
        .nested-th, .nested-td {
            padding: 10px;
            border: 1px solid #ddd;
            text-align: center;
        }
        .nested-th {
            background-color: #3498db;
            color: #fff;
        }
    </style>
</head>
<body>

    <h2>PHP Array Sorting</h2>

    <?php
    // Numeric Array
    $numericArray = [5, 3, 8, 1, 7];
    $sortedNumericArray = $numericArray; // Copy array to preserve original
    sort($sortedNumericArray);

    // Associative Array
    $associativeArray = [
        'one' => 1,
        'three' => 3,
        'five' => 5,
        'two' => 2,
        'four' => 4
    ];
    $sortedAssociativeArray = $associativeArray; // Copy array to preserve original
    ksort($sortedAssociativeArray);

    // Sorting Associative Array by Value
    $sortedAssociativeArrayByValue = $associativeArray; // Copy array to preserve original
    asort($sortedAssociativeArrayByValue);

    // Multidimensional Array
    $multidimensionalArray = [
        ['name' => 'John', 'age' => 25],
        ['name' => 'Alice', 'age' => 30],
        ['name' => 'Bob', 'age' => 22],
        ['name' => 'Eve', 'age' => 28]
    ];
    $sortedMultidimensionalArray = $multidimensionalArray; // Copy array to preserve original
    usort($sortedMultidimensionalArray, function ($a, $b) {
        return $a['age'] - $b['age'];
    });
    ?>

    <h3>Numeric Array</h3>
    <table>
        <tr>
            <th>Original</th>
            <td><?php echo implode(', ', $numericArray); ?></td>
        </tr>
        <tr>
            <th>Sorted</th>
            <td><?php echo implode(', ', $sortedNumericArray); ?></td>
        </tr>
    </table>

    <h3>Associative Array</h3>
    <table>
        <tr>
            <th>Original</th>
            <td>
                <table class="nested-table">
                    <tr>
                        <th class="nested-th">Key</th>
                        <th class="nested-th">Value</th>
                    </tr>
                    <?php foreach ($associativeArray as $key => $value): ?>
                        <tr>
                            <td class="nested-td"><?php echo $key; ?></td>
                            <td class="nested-td"><?php echo $value; ?></td>
                        </tr>
                    <?php endforeach; ?>
                </table>
            </td>
        </tr>
        <tr>
            <th>Sorted by Key</th>
            <td>
                <table class="nested-table">
                    <tr>
                        <th class="nested-th">Key</th>
                        <th class="nested-th">Value</th>
                    </tr>
                    <?php foreach ($sortedAssociativeArray as $key => $value): ?>
                        <tr>
                            <td class="nested-td"><?php echo $key; ?></td>
                            <td class="nested-td"><?php echo $value; ?></td>
                        </tr>
                    <?php endforeach; ?>
                </table>
            </td>
        </tr>
        <tr>
            <th>Sorted by Value</th>
            <td>
                <table class="nested-table">
                    <tr>
                        <th class="nested-th">Key</th>
                        <th class="nested-th">Value</th>
                    </tr>
                    <?php foreach ($sortedAssociativeArrayByValue as $key => $value): ?>
                        <tr>
                            <td class="nested-td"><?php echo $key; ?></td>
                            <td class="nested-td"><?php echo $value; ?></td>
                        </tr>
                    <?php endforeach; ?>
                </table>
            </td>
        </tr>
    </table>

    <h3>Multidimensional Array</h3>
    <table>
        <tr>
            <th>Original</th>
            <td>
                <table class="nested-table">
                    <tr>
                        <th class="nested-th">Details</th>
                    </tr>
                    <?php foreach ($multidimensionalArray as $person): ?>
                        <tr>
                            <td class="nested-td">
                                Name: <?php echo $person['name']; ?>, Age: <?php echo $person['age']; ?>
                            </td>
                        </tr>
                    <?php endforeach; ?>
                </table>
            </td>
        </tr>
        <tr>
            <th>Sorted by Age</th>
            <td>
                <table class="nested-table">
                    <tr>
                        <th class="nested-th">Details</th>
                    </tr>
                    <?php foreach ($sortedMultidimensionalArray as $person): ?>
                        <tr>
                            <td class="nested-td">
                                Name: <?php echo $person['name']; ?>, Age: <?php echo $person['age']; ?>
                            </td>
                        </tr>
                    <?php endforeach; ?>
                </table>
            </td>
        </tr>
    </table>

</body>
</html>
