"""Write Python programs to demonstrate method overloading and method overriding"""
# Method Overloading
class A:
    def lod(self,name = ""): # same metheod name but diffrent no of parameters
        print("my name is ",name)
    
    def lod(self, name="", surname=""): 
        print("my name is ", name, surname)

# Method Overriding 
class B():
    def rid(self):
        print("B class method")  # same method name in parent and child class

class C(B):
    def rid(self):
        super().rid() # we can call parent class method using super() method
        print("C class method")

a = A() 
a.lod("Yogesh")
a.lod("Yogesh","Vavadiya")

c = C()
c.rid()







