"""Write a Python program to write multiple strings into a file"""

f = open("F:\\Python\\Assignment\\Module - 8 Advance Python Programming\\3. Opening and Closing Files\A.txt", "r+")

f.writelines(["Opening and Closing Files\n" , "Reading and Writing Files"])

f.close()


