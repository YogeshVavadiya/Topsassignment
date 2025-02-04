"""Write Python programs to demonstrate different types of inheritance (single, multiple,
multilevel"""

# Single Inheritance
class Parent:
    def func1(self):
        print("This is function 1")

class Child(Parent):
    def func2(self):
        print("This is function 2")

ob = Child()
ob.func1()
ob.func2()

# Multiple Inheritance
class Parent1:
    def func1(self):
        print("This is function 1")

class Parent2:
    def func2(self):
        print("This is function 2")

class Child(Parent1, Parent2):
    def func3(self):
        print("This is function 3")

ob = Child()    
ob.func1()
ob.func2()
ob.func3()

# Multilevel Inheritance
class Parent:
    def func1(self):
        print("This is function 1")

class Child(Parent):
    def func2(self):
        print("This is function 2")

class GrandChild(Child):
    def func3(self):
        print("This is function 3")


ob = GrandChild()   
ob.func1()
ob.func2()
ob.func3()

