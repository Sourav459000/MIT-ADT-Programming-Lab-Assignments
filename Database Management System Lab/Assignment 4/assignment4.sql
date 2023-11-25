use TYAIEC;

create table assignment4(product TEXT, company TEXT, qty INT, rate INT, cost INT);

insert into assignment4 values('item1', 'com1', 2, 10, 20);
insert into assignment4 values('item2', 'com2', 5, 15, 75);
insert into assignment4 values('item3', 'com1', 3, 20, 60);
insert into assignment4 values('item4', 'com3', 6, 15, 90);
insert into assignment4 values('item5', 'com2', 7, 10, 70);
insert into assignment4 values('item6', 'com3', 2, 20, 40);
insert into assignment4 values('item7', 'com1', 4, 30, 120);
insert into assignment4 values('item8', 'com2', 5, 15, 75);

select product, count(qty) as qty from assignment4 group by cost;
select rate from assignment4 having count(rate) > 2;
select count(*), avg(rate), sum(cost), min(rate), max(rate) from assignment4;
select count(distinct company), avg(distinct rate) from assignment4;
 
select * from assignment4;
truncate assignment4;