# Write a Python program to find the first appearance of the substring 
# 'not' and 'poor' from a given string, if 'not' follows the 'poor', replace the 
# whole 'not'...'poor' substring with 'good'. Return the resulting string.

input_string = input("Enter the string: ")
index_poor = input_string.find('poor')
index_not = input_string.find('not')

if index_poor != -1 and index_not != -1 and index_poor < index_not:
    result_string = input_string[:index_poor] + 'good' + input_string[index_not + len('not'):]
else:
    result_string = input_string

print("Resulting string:", result_string)
