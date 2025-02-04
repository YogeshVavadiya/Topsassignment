"""Write a Python program to handle multiple exceptions (e.g., file not found, division by zero)"""
try:
    no1 = int(input("Enter first number: "))
    no2 = int(input("Enter second number:"))
    result = no1/no2
    print(result)

    f=open("3. Opening and Closing Files\\Ab.txt","r")
    print(f.readlines())
    f.close()

except ZeroDivisionError:
    print("Division by zero is not allowed")
except ValueError:
    print("Enter only numbers")
except FileNotFoundError:
    print("File not found")

