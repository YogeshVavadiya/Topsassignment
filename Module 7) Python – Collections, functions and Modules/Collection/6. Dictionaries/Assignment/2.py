"""14) Write a Python program to access values using keys from a dictionary."""

dict = {
    # "key" : "value" key must be unique
    'make': 'Tesla', 
    'model': 'Model S', 
    'year': 2022, 
    'color': 'Midnight Silver Metallic', 
    'battery_range': '396 miles',
    'autopilot': 'Yes'
    }

print(dict["color"])# you can access value by key


# k = input("Enter a key : ") # reate a var for user enter a key 
# print(k,"=",dict[k]) # and give var to dict as a key to get value
