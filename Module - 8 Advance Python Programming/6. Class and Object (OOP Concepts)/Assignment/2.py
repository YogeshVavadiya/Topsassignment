"""Write a Python program to demonstrate the use of local and
global variables in a class"""

glob_var = "This is global variable "

class A:
    def fun(self):
        self.loc_var = "This is local variable"
        print("Inside class A")
        print(glob_var) # accessing global variable inside class
        print(self.loc_var) # accessing local variable inside class 
obj = A()
obj.fun()   
print("Outside class A")    
print(glob_var) # accessing global variable outside class   
print(obj.loc_var) # accessing local variable outside class 
 