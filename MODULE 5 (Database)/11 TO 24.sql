use yogesh;

CREATE TABLE salseperson (sno int PRIMARY KEY, sname text NOT null, city text not null, comm int not null);

INSERT INTO salseperson VALUES
(1001,"Peel","London",0.12),
(1002,"Serres","San Jose",0.13),
(1004,"Motika","London",0.11),
(1007,"Rafkin","Barcelona",0.15),
(1003,"Axelrod","New York",0.1);

select * from salseperson;

CREATE TABLE customer (cnm int PRIMARY KEY,cname text not null, city text NOT null, rating int not null,sno int,  
FOREIGN KEY customer(sno)REFERENCES salseperson(sno));

INSERT INTO customer VALUES
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roa",100,1004);

SELECT * FROM `salseperson` WHERE city = 'London' AND comm >= 0.12;


SELECT * from salseperson WHERE city IN ('London','Barcelona');

SELECT * FROM salseperson WHERE comm BETWEEN 0.10 AND 0.12;

SELECT * FROM customer WHERE rating <=100;

SELECT * FROM `salseperson`;
create table orders(
ord_no int,purch_amt float,ord_date date,customer_id int,salesman_id int
   );
insert into orders values
(70001,150.5,"2012-10-05",3005,5002),
(70009,270.65,"2012-09-10",3001,5005),
(70002,65.26,"2012-10-05",3002,5001),
(70004,110.5,"2012-08-17",3009,5003),
(70007,948.5,"2012-09-10",3005,5002),
(70005,2400.6,"2012-07-27",3007,5001),
(70008,5760,"2012-09-10",3002,5001),
(70010,1983.43,"2012-10-10",3004,5006),
(70003,2480.4,"2012-10-10",3009,5003),
(70012,250.45,"2012-06-27",3008,5002),
(70011,75.29,"2012-08-17",3003,5007),
(70013,3045.2,"2012-04-25",3002,5001);

SELECT ord_no,ord_date,purch_amt FROM orders WHERE salesman_id = 5001;

CREATE TABLE item_mast 
(pro_id int PRIMARY KEY AUTO_INCREMENT, pro_name text not null, pro_price int not null,pro_com int not null);

insert into item_mast values
(101,"Mother Board",3200.00,15),
(102,"Key Board",450.00,16),
(103,"ZIP drive",250.00,14),
(104,"Speaker",550.00,16),
(105,"Monitor",5000.00,11),
(106,"DVD drive",900.00,12),
(107,"CD drive",800.00,12),
(108,"Printer",2600.00,13),
(109,"Refill cartridge",350.00,13),
(110,"Mouse",250.00,12);

SELECT * FROM item_mast WHERE pro_price BETWEEN 200 AND 600;

SELECT AVG(pro_price) FROM item_mast;

SELECT pro_name AS Item_Name , pro_price AS Price_in_Rs FROM item_mast;

SELECT pro_name,pro_price FROM item_mast WHERE PRO_PRICE >= 250 ORDER BY PRO_PRICE  DESC, PRO_NAME ASC;