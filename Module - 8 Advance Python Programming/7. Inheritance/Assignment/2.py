"""14) Write a Python program to show multilevel inheritance. """

class A:#parent class
    num1 = int(input("Enter a number: "))
    num2 = int(input("Enter a number: "))    

    def sum(self):
        print("Sum is: ",self.num1+self.num2)

class B(A): #child class
    def sub(self):
        print("Difference is: ",self.num1-self.num2)

class C(B): #child class 
    def mul(self):
        print("Product is: ",self.num1*self.num2)

obj = C()
obj.sum()
obj.sub()
obj.mul()

