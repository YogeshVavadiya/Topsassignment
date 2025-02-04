# • Write a Python program to get the Fibonacci series of given range.

no = int(input("Enter the maximum value for the Fibonacci series: "))
result=0
x = 0
y = 1
z = 0

print(f"The Fibonacci series up to {no} is:")

while z <= no:
    print(z)
    x=y
    y=z
    z=x+y
    

