"""22) Write a Python program to insert data into an SQLite3 database and fetch it."""

import pymysql

mydb = pymysql.connect(host="localhost",user="root",passwd="", database = "schools") # Connect to the database

mycursor = mydb.cursor()

mycursor.execute("insert into student values(1,'Yogesh','Python')") # Insert data
mycursor.execute("insert into student values(2,'Jignesh','Python')") 
mycursor.execute("insert into student values(3,'Piyush','Python')")
mycursor.execute("insert into student values(4,'Raj','data science')")
mycursor.execute("insert into student values(6,'Rahul','frontend')")

mydb.commit() # Commit the changes

mycursor.execute("select * from student") 
result = mycursor.fetchall()

print(result) 

