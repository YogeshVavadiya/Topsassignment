create database yogesh;
 
 use yogesh;
 
 create table student(rollno int PRIMARY key,name text not null,branch text not null);
 INSERT into student VALUES
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and Com");

create table exam(rollno int,s_code varchar(10) not null,marks int not null,p_code varchar(10) not null, 
FOREIGN key exam(rollno) REFERENCES student(rollno));

INSERT INTO exam VALUES
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");
 