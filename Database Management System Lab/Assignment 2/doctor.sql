use TYAIEC;

CREATE TABLE doctor(doctor_name varchar(20), id int(4), license varchar(6));

insert into doctor value('Om Shinde','2321','CC8435');

select * from doctor;

alter table doctor rename column id to doctor_id;
alter table doctor rename column license to doctor_license;

truncate doctor; 

drop table doctor;