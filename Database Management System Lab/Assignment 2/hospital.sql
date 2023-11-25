use TYAIEC;

create table hospital (Hospital_registration_no varchar(20), Hospital_name varchar(50), Hospital_address varchar(70));

alter table hospital modify Hospital_registration_no varchar(13);

insert into hospital values ('SAFNVS@WEK1D2', 'Joshi Hospital', 'Opposite to Ambikanagar Bus stop, Kedgaon, Ahmednagar');
insert into hospital values ('ABCNVS@WEK1D2', 'Pandit Hospital', 'Opposite to Pune bus stand, Ahmednagar');

alter table hospital rename column Hospital_registration_no to Hospital_Reg_no;
alter table hospital rename column Hospital_address to Hospital_location;

update hospital set Hospital_name='Ambika Nursing Home' where Hospital_name='Joshi Hospital';

truncate table hospital;

drop table hospital;

select * from hospital;
