use yogesh;
CREATE TABLE employee 
(Employee_id int PRIMARY KEY, First_name text not null, Last_name text not null,
 Salary int not null,Joining_date datetime not null, Department text NOT null);

INSERT INTO employee VALUES
(2,"Michael","Clarke",800000,"2013-01-01 12.00.00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12.00.00" ,"Banking"),
(4,"Tom","Jose",600000,"2013-02-01 12.00.00" ,"Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12.00.00","Insurance"),
(6,"Phillip","Mathew",750000,"2013-01-01 12.00.00","Services"),
(7,"Apil","Soni",650000,"2013-01-01 12.00.00","Services"),
(8,"Yogesh","Vavdiya",800000,"2013-02-01 12.00.00","Insurance");

CREATE TABLE incentive(Employee_re_id int,incentive_date date,incentive_amount int );

INSERT INTO incentive VALUES
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);

SELECT * FROM employee WHERE First_name = 'Tom';

SELECT First_name, Salary, Joining_date FROM employee ;

SELECT * FROM employee ORDER BY First_name ASC, Salary DESC;

SELECT * FROM employee WHERE First_name LIKE 'j%';

SELECT * FROM employee ORDER BY Salary ASC;

SELECT employee.First_name, incentive.Incentive_amount FROM employee,incentive where incentive.Incentive_amount > 3000; 

