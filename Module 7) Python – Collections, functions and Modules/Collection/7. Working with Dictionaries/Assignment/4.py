"""8) Write a Python program to count how many times each
character appears in a string"""

dict = {}#empty dict

str = input("Enter a string : ") # u_input a string

for i in str: # itretting string
    if i in dict: #if i alredy store in dict increse the count +1
        dict[i] += 1 
    else:
        dict[i] = 1 # else store i and count 1 
 
print(dict.items())# print all key,value pair 
