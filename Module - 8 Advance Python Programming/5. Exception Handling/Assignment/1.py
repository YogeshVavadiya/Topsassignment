"""Write a Python program to handle exceptions in a calculator. """

try:
    num1 = float(input("Enter first number: "))
    num2 = float(input("Enter second number: "))
    operation = input("Enter operation (+, -, *, /): ")

    if operation == '+':
        print(f"The result is: {num1+num2}")
    elif operation == '-':
        print(f"The result is: {num1-num2}")
    elif operation == '*':
        print(f"The result is: {num1*num2}")
    elif operation == '/':
        try:
            print(f"The result is : {num1/num2}")
        except ZeroDivisionError:
            print("Division by zero is not allowed.")
    else:
        print("Invalid operation")
except ValueError:
    print("Enter only numbers")
