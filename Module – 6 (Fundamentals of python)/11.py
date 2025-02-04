# Write a python program to sum of the first n positive integers.

 
sum = 0
i = 0
n = int (input("Enter no : "))

while(i<=n):
    sum += i
    i+=1

print (f"sum of {n} no is : ",sum)