"""Write a Python program to check the current position of the file cursor using tell()"""

f = open("F:\\Python\\Assignment\\Module - 8 Advance Python Programming\\3. Opening and Closing Files\A.txt","w")

f.write(" Screen")
p = f.tell()#tell() shows the current position of file  
print(p)

f.close() 