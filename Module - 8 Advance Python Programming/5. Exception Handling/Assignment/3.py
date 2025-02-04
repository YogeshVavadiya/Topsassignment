"""Write a Python program to handle file exceptions and use the finally block for closing
the file."""

try:
    f = open("3. Opening and Closing Files\\Ab.txt","r")
    print(f.readlines())
except FileNotFoundError:
    print("file not found ")
finally:
    try:
        f.close()
        print("File closed")
    except NameError:
        print("File is not opened")
    