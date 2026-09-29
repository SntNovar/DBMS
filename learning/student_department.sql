-- Question 1: Student and Department Management
-- A. Theory:
-- Explain the purpose of DDL and DML commands in SQL. Explain how CREATE, ALTER, INSERT, UPDATE, and DELETE are used while creating and managing database tables. Also explain the role of Primary Key and Foreign Key constraints.
-- B. Practical:
-- Create a database system for managing students and departments.
-- 1. Create Department and Student tables.
-- 2. Apply suitable Primary Key and Foreign Key constraints.
-- 3. Add a new column to the Student table using ALTER.
-- 4. Insert at least 5 students belonging to different departments.
-- 5. Display students belonging to a particular department.
-- 6. Update the department of a student.
-- 7. Delete a student based on a condition.
-- 8. Display the final student records.


create database studept;
use studept;

create table departments (
deptID  int primary key,
deptNAME varchar(50)
);

create table students (
stuID int primary key ,
stu_name varchar(50),
age int,
deptID int,
foreign key (deptID) references departments(deptID)
);

alter table students add email varchar(50);
insert into departments values(1 ,'AIT');
insert into departments values(2 ,'CSE');
insert into departments values(3 ,'BSc');
insert into departments values(4 ,'BIOTECHNOLOGY');

insert into students values(101, 'Amit', 17, 1, 'amit@gmail.com');
insert into students values(102, 'sushant', 20, 1, 'sdfghj@gmail.com');
insert into students values(103, 'akshit', 18, 2, 'cvb@gmail.com');
insert into students values(104, 'komal', 10, 2, 'cvb@gmail.com');
insert into students val
ues(105, 'mehakk', 19, 1, 'cvb@gmail.com');

select *from  students  where deptID = 1;

SET SQL_SAFE_UPDATES = 0;

update students set deptID = 3 where stu_name = 'sushant';

delete from students where stu_name = 'akshit';

select *from students;