"""17) Write a Python program to show hybrid inheritance. """

class A: 
    num1 = int(input("Enter the first number: "))
    num2 = int(input("Enter the second number: "))

class B(A): #class b inherits class A
    def sum(self):
        print("Sum of two numbers is: ", self.num1 + self.num2)

class C(A): #class c inherits class A
    def sub(self):
        print("Subtraction is: ", self.num1 - self.num2)

class D(B, C): #class D inherits class B and C
    def mul(self):
        print("Multiplication is: ", self.num1 * self.num2)


obj = D()
obj.sum()
obj.sub()
obj.mul()

