"""16) Write a Python program to separate keys and values from a dictionary using
keys() and values() methods."""

dict = {
# key : value
    1 : 'a',
    2 : 'b',
    3 : 'c',
    4 : 'd'
}

print(dict.keys()) #using keys() we can access all the keys from dict
print(dict.values())#using values() we can access all the values from dict
print(dict.items())#using iteams() we can access all the key, values from dict
