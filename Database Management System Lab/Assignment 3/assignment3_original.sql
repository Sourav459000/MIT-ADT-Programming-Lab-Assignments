USE tyaiec;

-- Create the 'company' table
CREATE TABLE company (
    company_id INT AUTO_INCREMENT PRIMARY KEY,
    company_name VARCHAR(255),
    company_revenue DECIMAL(10, 2),
    company_strength INT,
    company_domain VARCHAR(255)
);
-- Insert 5 values into the 'company' table
INSERT INTO company (company_name, company_revenue, company_strength, company_domain)
VALUES
    ('Company A', 1000000.00, 500, 'Tech'),
    ('Company B', 750000.50, 300, 'Healthcare'),
    ('Company C', 200000.25, 100, 'Finance'),
    ('Company D', 500000.75, 400, 'Retail'),
    ('Company E', 800000.10, 200, 'Manufacturing');
UPDATE company
SET company_revenue = 1200000.00
WHERE company_name = 'Company A';
DELETE FROM company
WHERE company_name = 'Company C';
SELECT * FROM company;