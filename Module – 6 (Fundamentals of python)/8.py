# # Write a Python program to test whether a passed letter is a vowe or not

c = str(input("Enter a Letter : ")).lower()
vowel = "aeiou"

if c in vowel:
    print("letter is vowel")
else:
    print("letter is not vowel")

