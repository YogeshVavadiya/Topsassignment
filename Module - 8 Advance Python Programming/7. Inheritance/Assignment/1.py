"""13) Write a Python program to show single inheritance."""

class A:
    num1 = int(input("Enter no number: "))
    num2 = int(input("Enter no number: ")) 
    def add(self):
        print("Sum is: ",self.num1+self.num2)    
    
    
class B(A): #we can use class a properties in class b using inheritance
    def sub(self):
        print("Difference is: ",self.num1-self.num2)

obj = B()   
obj.add()
obj.sub()


