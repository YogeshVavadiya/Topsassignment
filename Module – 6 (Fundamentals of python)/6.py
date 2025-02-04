# • Write python program that swap two number with temp variable

a = (input("Enter the first number (a): "))
b = (input("Enter the second number (b): "))


print(f"Before swapping: a = {a}, b = {b}")

temp = a
a = b
b = temp

print(f"After swapping: a = {a}, b = {b}")
