"""15) Write a Python program to show multiple inheritance."""

class A: # parent class 1    
    def sum(self):
        print("Sum is: ", self.num1 + self.num2)   
class B: # parent class 2
    def multi(self):
        print("Multiplication is: ", self.num1 * self.num2)
class C(A, B): # child class 
    num1 = int(input("Enter first number: "))
    num2 = int(input("Enter second number: "))


obj = C()
obj.sum()
obj.multi()

