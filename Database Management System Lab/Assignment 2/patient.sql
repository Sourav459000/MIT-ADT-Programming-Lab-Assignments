use TYAIEC;

create table patient(patientAdmissionNumber INT not null unique, patientName TEXT, patientPhNo BIGINT, patientAddress TEXT, patientDOB date, patientBloodGroup Text, primary key(patientAdmissionNumber)); 

insert into patient values('01', 'Om Sharma', '7016903386', 'Ahmedabad, Gujarat', '2003-02-18', 'B+');
insert into patient values('02', 'Rishi Dhawan', '8925194812', 'Lucknow, Uttar Pradesh', '2002-07-11', 'O+');

alter table patient rename column patientAdmissionNumber to patientAdmitNo;
alter table patient rename column patientPhNo to patientContactNo;

truncate table patient;

drop table patient;

select * from patient;