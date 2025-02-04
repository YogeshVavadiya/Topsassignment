"""16) Write a Python program to show hierarchical inheritance."""

class A: # parent class 
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))

class B(A): # child class 1
    def sum(self):
        print("Sum is: ", self.num1 + self.num2)
    
class C(A): # child class 2
    def multi(self):
        print("Multiplication is: ", self.num1 * self.num2)

obj1 = B()
obj2 = C()

obj1.sum()
obj2.multi()

