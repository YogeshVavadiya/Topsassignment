#  Write a Python program to get the Factorial number of given number.

no = int(input("Enter a number to find its factorial: "))

result = 1
while (no>0):
    result = result * no
    no=no-1
print(f"The factorial of {no} is {result}.")

