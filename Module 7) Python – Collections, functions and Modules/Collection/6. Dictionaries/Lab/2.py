"""• Write a Python program to access values using dictionary keys."""


dict = {
    # "key" : "value"
    "name" : "xyz",
    "Biology" : 55,
    "Chemistry" : 67,
    "Physics" : 78,
    "Zoology" : 76,
    "Geology" : 87
}

print("Keys ",dict.keys()) #with the key() methods we can only print the keys

print("Values ",dict.values()) #with the value methods we can only print the values 

print("Key : value pair ",dict.items()) # with the items() method we can print key:value pair 

