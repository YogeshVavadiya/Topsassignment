"""Write a Python program to handle exceptions in a simple calculator (division by zero, invalidinput)."""

try:
    no1 =int(input("Enter first number:"))
    no2 =int(input("Enter second number:"))

    result = no1/no2
    print(result)
except ZeroDivisionError:
    print("Dived by zero is not allowed")
except ValueError:
    print("Enter only numbers")