"""Write a Python program to create a class and access its properties using an object"""
class A: #define a class    
    def fun(self): # define a method
        name = "Yogesh"
        print(name)

obj = A() # create object of a class
obj.fun() # call the method of a class using object