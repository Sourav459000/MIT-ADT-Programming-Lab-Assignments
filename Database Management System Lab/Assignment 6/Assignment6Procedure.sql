use practice;

-- Create the procedure
DELIMITER //

CREATE PROCEDURE DisplayHospitalRecords()
BEGIN
    SELECT * FROM hospital;
END //

DELIMITER ;

CALL DisplayHospitalRecords();
