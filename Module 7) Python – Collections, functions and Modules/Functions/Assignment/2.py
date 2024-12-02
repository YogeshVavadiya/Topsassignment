"""20) Write a Python program to create a parameterized function that takes 
two arguments and prints their sum."""

def sum_fun(num1,num2):#defin a function with two parameter 
    sum = num1+num2
    print(sum)

no1 = int(input("Enter no1 : "))
no2 = int(input("ENter no2 : "))
sum_fun(no1,no2)#call function and passing two argument
