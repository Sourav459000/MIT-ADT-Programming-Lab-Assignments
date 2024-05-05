use TYAIEC;

create table student(roll_no INT, stu_name TEXT, address TEXT, phonenumber BIGINT, age INT);

insert into student values(1, 'Harsh', 'DELHI', 2397273873, 18);
insert into student values(2, 'Pratik', 'BIHAR', 8237892248, 19);
insert into student values(3, 'Riyanka', 'Siliguri', 8235679293, 20);
insert into student values(4, 'Deep', 'Ramnagar', 9223952904, 18);
insert into student values(5, 'Saptarhi', 'KOlkata', 8675435253, 19);
insert into student values(6, 'Dhanraj', 'Barabajar', 9086587443, 20);
insert into student values(7, 'Rohit', 'Balurghat', 3456457745, 18);
insert into student values(8, 'Niraj', 'Alipur', 3536463473, 19);

truncate student;

create table StudentCourse(course_id INT, roll_no INT);

insert into StudentCourse values(1, 1);
insert into StudentCourse values(2, 2);
insert into StudentCourse values(2, 3);
insert into StudentCourse values(3, 4);
insert into StudentCourse values(1, 5);
insert into StudentCourse values(4, 9);
insert into StudentCourse values(5, 10);
insert into StudentCourse values(4, 11);

select StudentCourse.course_id, student.stu_name, student.age from student inner join StudentCourse on student.roll_no = StudentCourse.roll_no;
select student.stu_name, StudentCourse.course_id from student left join StudentCourse on student.roll_no = StudentCourse.roll_no;
select student.stu_name, StudentCourse.course_id from student right join StudentCourse on student.roll_no = StudentCourse.roll_no;
-- select student.roll_no, student.stu_name, student.address, student.phonenumber, student.age, StudentCourse.course_id, StudentCourse.roll_no from student full join StudentCourse on student.roll_no = StudentCourse.roll_no;