<?php
session_start();

// Initialize the array if it doesn't exist
if (!isset($_SESSION['registeredCompanies'])) {
    $_SESSION['registeredCompanies'] = [];
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $companyID = $_POST["companyID"];
    $companyName = $_POST["companyName"];
    $location = $_POST["location"];
    $department = $_POST["department"];

    $companyData = [
        "companyID" => $companyID,
        "companyName" => $companyName,
        "location" => $location,
        "department" => $department
    ];

    // Add the company data to the array
    $_SESSION['registeredCompanies'][] = $companyData;

    // Store the updated array in a file or database for persistence
    // For now, we'll just display it
    echo "<h2>Registered Company:</h2>";
    echo "<p>Company ID: {$companyData['companyID']}</p>";
    echo "<p>Company Name: {$companyData['companyName']}</p>";
    echo "<p>Location: {$companyData['location']}</p>";
    echo "<p>Department: {$companyData['department']}</p>";
}
?>

