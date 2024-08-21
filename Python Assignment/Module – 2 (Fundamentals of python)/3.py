# • Write a Python program to get the Fibonacci series of given range.

max_value = int(input("Enter the maximum value for the Fibonacci series: "))

a = 0
b = 1

print(f"The Fibonacci series up to {max_value} is:")

while a <= max_value:
    print(a, end=' ')
    a, b = b, a + b 
