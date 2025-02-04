"""Write a Python program to create a class and access the properties
of the class using an object."""

class A:
    def fun(self,a,b):
        sum  = a+b
        print("sum = ",sum)  
obj = A()   
obj.fun(10,20) 