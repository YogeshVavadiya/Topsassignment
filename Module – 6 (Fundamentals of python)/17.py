# Write a Python program to get a single string from two given strings, 
# separated by a space and swap the first two characters of each string.

string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")

if len(string1) < 2:
    modified_string1 = string1
else:
    modified_string1 = string1[1] + string1[0] + string1[2:]
if len(string2) < 2:
    modified_string2 = string2
else:
    modified_string2 = string2[1] + string2[0] + string2[2:]
result = modified_string1 + " " + modified_string2

print("Resulting string:", result)