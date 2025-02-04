"""20) Write a Python program to show method overriding"""

class B():
    def rid(self):
        print("B class method")  # same method name in parent and child class

class C(B):
    def rid(self):
        super().rid() # we can call parent class method using super() method
        print("C class method")

c = C()
c.rid()