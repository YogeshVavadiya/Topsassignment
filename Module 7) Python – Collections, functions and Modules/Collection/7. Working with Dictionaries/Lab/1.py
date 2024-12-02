"""• Write a Python program to update a value in a dictionary."""

dict = {
    # "key" : "value"
    "name": "xyz",
    "Biology" : 55,
    "Chemistry": 67,
    "Physics" : 78,
    "Zoology": 76,
    "Geology":87
    }

print("KEY       Value")

for key, value in dict.items(): # ittreting key and value from dict.items()
    print(f"{key}  =  {value}") # printing one by one key and value pair
