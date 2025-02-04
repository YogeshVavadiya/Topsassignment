""" 18) Write a Python program to demonstrate the use of super() in inheritance"""

class A:    
    def __init__(self):
        self.num1 = int(input("Enter the first number: "))
        self.num2 = int(input("Enter the second number: "))

class B(A): #class b inherits class A
    def __init__(self):
        super().__init__() #super() is used to call the constructor of the parent class
        print("sum is :" ,self.num1 + self.num2)

class C(A): #class c inherits class A
    def __init__(self):
        super().__init__()
        print("sub is :" ,self.num1 - self.num2)

class D(B, C): #class D inherits class B and C
    def __init__(self):
        super().__init__()
        print("mul is :" ,self.num1 * self.num2)

obj = D()
