<?php
session_start();

// Include the register_company.php script to access the $registeredCompanies array
// include 'register_company.php';

if ($_SERVER["REQUEST_METHOD"] == "GET") {
    $searchLocation = $_GET["searchLocation"];

    echo "<h2>Companies in $searchLocation:</h2>";

    // Iterate through the registered companies and display matching ones
    foreach ($_SESSION['registeredCompanies'] as $company) {
        if (strcasecmp($company["location"], $searchLocation) === 0) {
            echo "<p>Company ID: {$company['companyID']}</p>";
            echo "<p>Company Name: {$company['companyName']}</p>";
            echo "<p>Location: {$company['location']}</p>";
            echo "<p>Department: {$company['department']}</p>";
            echo "<hr>";
        }
    }
}
?>
