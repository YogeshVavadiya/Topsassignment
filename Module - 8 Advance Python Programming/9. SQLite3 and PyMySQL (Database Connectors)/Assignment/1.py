"""21) Write a Python program to create a database and a table using SQLite3"""

import pymysql

# mydb = pymysql.connect(host="localhost",user="root",passwd="") # Connect to the database

# mycursor = mydb.cursor() # Create a cursor object

# mycursor.execute("create database schools") # Create a database

# mydb.commit() # Commit the changes

mydb = pymysql.connect(host="localhost",user="root",passwd="", database = "schools") # Connect to the database

mycursor = mydb.cursor()

mycursor.execute("create table student(id int(10) , name varchar(20), subject varchar(20))") # Create a table

mydb.commit() 



