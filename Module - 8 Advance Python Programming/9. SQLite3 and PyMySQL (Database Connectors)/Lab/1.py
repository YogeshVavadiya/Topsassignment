"""Write a Python program to connect to an SQLite3 database, create a table, insert data, and
fetch data."""

import pymysql

# Connect to the database
mydb = pymysql.connect(host='localhost',user='root',password='',database='test')

mycursor = mydb.cursor() # Create a cursor object

# Create a table
mycursor.execute("CREATE TABLE student (name VARCHAR(24), subject VARCHAR(25), city VARCHAR(25))")

# Insert data
mycursor.execute("INSERT INTO student VALUES ('Yogesh', 'Python', 'ahmedabad')")
mycursor.execute("INSERT INTO student VALUES ('Jignesh', 'Python', 'ahmedabad')")
mycursor.execute("INSERT INTO student VALUES ('Piyush', 'Python', 'ahmedabad')")

mydb.commit() # Commit the changes

# Fetch data
mycursor.execute("SELECT * FROM student") # Execute the query
result = mycursor.fetchall()

print(result)



