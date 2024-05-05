<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Company Registration</title>
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
            margin: 20px auto;
            width: 50%;
            background-color: #fff;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            border-radius: 8px;
            padding: 20px;
            box-sizing: border-box;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            margin-bottom: 15px;
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
        label {
            display: block;
            margin-bottom: 8px;
            color: #2c3e50;
        }
        input {
            width: calc(100% - 12px);
            padding: 8px;
            margin-bottom: 15px;
            box-sizing: border-box;
            border: 1px solid #3498db;
            border-radius: 5px;
        }
        button {
            padding: 12px 30px;
            font-size: 16px;
            cursor: pointer;
            background-color: #3498db;
            color: #fff;
            border: none;
            border-radius: 5px;
            transition: background-color 0.3s ease;
        }
        button:hover {
            background-color: #2980b9;
        }
    </style>
</head>
<body>
    
    <h2>Company Registration</h2>
    
    <form action="register_company.php" method="post">
        <table>
            <tr>
                <th>Field</th>
                <th>Value</th>
            </tr>
            <tr>
                <td>
                    <label for="companyID">Company ID:</label>
                </td>
                <td>
                    <input type="text" id="companyID" name="companyID" required>                    
                </td>
            </tr>
            <tr>
                <td>
                    <label for="companyName">Company Name:</label>
                </td>
                <td>
                    <input type="text" id="companyName" name="companyName" required>
                </td>
            </tr>
            <tr>
                <td>
                    <label for="location">Location:</label>
                </td>
                <td>
                    <input type="text" id="location" name="location" required>                    
                </td>
            </tr>
            <tr>
                <td>
                    <label for="department">Department:</label>
                </td>
                <td>
                    <input type="text" id="department" name="department" required>
                </td>
            </tr>
        </table>
        <button type="submit">Register Company</button>
    </form>

    <form action="search_company.php" method="get">
        <table>
            <tr>
                <th>Field</th>
                <th>Value</th>
            </tr>
            <tr>
                <td>
                    <label for="searchLocation">Search Companies in Location:</label>
                </td>
                <td>
                    <input type="text" id="searchLocation" name="searchLocation" required>
                </td>
            </tr>
        </table>
        <button type="submit">Search</button>
    </form>

</body>
</html>
