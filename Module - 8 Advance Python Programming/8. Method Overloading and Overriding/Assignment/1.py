"""19) Write a Python program to show method overloading."""

class A:
    def lod(self,name = ""): # same metheod name but diffrent no of parameters
        print("my name is ",name)
    
    def lod(self, name="", surname=""): 
        print("my name is ", name, surname)

a = A()
a.lod("Yogesh")
a.lod("Yogesh","Vavadiya")
