# Write a Python program to get a string made of the first 2 and the last 
# 2 chars from a given a string. If the string length is less than 2, return 
# instead of the empty string.

def extract_chars(s):
    if len(s) < 2:
        return s
    result = s[:2] + s[-2:]
    return result

input_string = input("Enter a string: ")
result = extract_chars(input_string)
print("Resulting string:", result)
