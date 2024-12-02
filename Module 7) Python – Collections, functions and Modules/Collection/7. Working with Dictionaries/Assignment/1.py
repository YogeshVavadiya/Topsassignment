"""15) Write a Python program to update a value at a particular key in a dictionary."""

dict = {
# key : value
    1 : 'a',
    2 : 'b',
    3 : 'c',
    4 : 'd'
}
#here we change the 3 : c to f 
# dict_name[key] = value
dict[3]='f'

print(dict[3])