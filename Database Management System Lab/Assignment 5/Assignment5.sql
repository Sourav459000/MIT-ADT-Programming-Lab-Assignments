create database practice;

use practice;

CREATE TABLE hospital (
    hospital_id INT PRIMARY KEY,
    hospital_name VARCHAR(255) NOT NULL,
    location VARCHAR(255),
    capacity INT,
    rating FLOAT,
    established_date DATE
);

CREATE TABLE doctor (
    doctor_id INT PRIMARY KEY,
    doctor_name VARCHAR(255) NOT NULL,
    specialization VARCHAR(255),
    experience INT,
    hospital_id INT,
    FOREIGN KEY (hospital_id) REFERENCES hospital(hospital_id)
);

INSERT INTO hospital (hospital_id, hospital_name, location, capacity, rating, established_date)
VALUES
    (1, 'City Hospital', 'New York', 300, 4.5, '2000-01-15'),
    (2, 'General Medical Center', 'Los Angeles', 250, 4.2, '1995-08-20'),
    (3, 'Community Health Center', 'Chicago', 150, 4.0, '2005-03-10');

INSERT INTO doctor (doctor_id, doctor_name, specialization, experience, hospital_id)
VALUES
    (101, 'Dr. Smith', 'Cardiologist', 10, 1),
    (102, 'Dr. Johnson', 'Orthopedic Surgeon', 8, 2),
    (103, 'Dr. Davis', 'Pediatrician', 12, 3);
    
SELECT doctor.*, hospital.hospital_name
FROM doctor
INNER JOIN hospital ON doctor.hospital_id = hospital.hospital_id;

SELECT hospital.*, doctor.doctor_name
FROM hospital
LEFT JOIN doctor ON hospital.hospital_id = doctor.hospital_id;

SELECT doctor.*, hospital.hospital_name
FROM doctor
RIGHT JOIN hospital ON doctor.hospital_id = hospital.hospital_id;

SELECT doctor.*, hospital.hospital_name
FROM doctor
FULL OUTER JOIN hospital ON doctor.hospital_id = hospital.hospital_id;
-- MySQL doesn't directly support FULL OUTER JOIN. You can achieve a similar result using a combination of LEFT JOIN and UNION with a RIGHT JOIN.

SELECT doctor.*, hospital.hospital_name
FROM doctor
LEFT JOIN hospital ON doctor.hospital_id = hospital.hospital_id
UNION
SELECT doctor.*, hospital.hospital_name
FROM doctor
RIGHT JOIN hospital ON doctor.hospital_id = hospital.hospital_id
WHERE doctor.doctor_id IS NULL;

-- Nested SELECT in WHERE clause:
SELECT *
FROM hospital
WHERE rating > (SELECT AVG(rating) FROM hospital);

-- Scalar Subquery:
SELECT doctor.*, (SELECT MAX(capacity) FROM hospital WHERE hospital_id = doctor.hospital_id) AS max_hospital_capacity
FROM doctor;

-- Subquery with IN:
SELECT *
FROM doctor
WHERE hospital_id IN (SELECT hospital_id FROM hospital WHERE location IN ('New York', 'Los Angeles'));

-- Subquery with EXISTS:
SELECT *
FROM hospital
WHERE EXISTS (SELECT 1 FROM doctor WHERE doctor.hospital_id = hospital.hospital_id AND experience > 10);