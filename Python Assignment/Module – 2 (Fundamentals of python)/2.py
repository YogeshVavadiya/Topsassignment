#  Write a Python program to get the Factorial number of given number.

number = int(input("Enter a number to find its factorial: "))

if number < 0:
    print("Factorial is not defined for negative numbers.")
else:
    result = 1
    for i in range(1, number + 1):
        result *= i
    print(f"The factorial of {number} is {result}.")
