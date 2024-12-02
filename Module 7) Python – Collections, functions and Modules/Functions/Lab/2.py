"""• Write a Python program to create a calculator using functions."""

def add():
    sum = num1+num2
    print(sum)

def multi():
    multiplication = num1*num2
    print(multiplication)

def div():
    division = num1/num2
    print(division)

def sub():
    subs = num1-num2
    print(sub)    

menu = ("""
Press 1 for addition
press 2 for Multiplication
press 3 for division
press 4 for substraction""")

print(menu)

choice = int(input("Enter Your choice "))

num1=int(input("Enter no 1 - "))
num2=int(input("Enter no 2 - "))

if choice == 1:
    add()
elif choice == 2:
    multi()
elif choice == 3:
    div()
elif choice == 4:
    sub()
else:
    print("Please enter a right choice ")