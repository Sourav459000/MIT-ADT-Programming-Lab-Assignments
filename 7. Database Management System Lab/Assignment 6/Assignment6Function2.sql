use tyaiec;
SET GLOBAL log_bin_trust_function_creators = 1;

DELIMITER //
CREATE FUNCTION squ(val1 INT) RETURNS INT

BEGIN
    DECLARE result INT;
    SET result = val1 * val1;  
    
    RETURN result;
END;

//
DELIMITER ;


select squ(2);

select database() from dual;