# • Write python program that swap two number with temp variable and 
# without temp variable.

a = float(input("Enter the first number (a): "))
b = float(input("Enter the second number (b): "))


print(f"Before swapping: a = {a}, b = {b}")

temp = a
a = b
b = temp

print(f"After swapping: a = {a}, b = {b}")
