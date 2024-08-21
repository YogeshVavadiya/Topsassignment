# # Write a Python program to test whether a passed letter is a vowe or not

# c = str(input("Enter a Letter : "))

# if (c.upper()) == 'A' or 'E' or 'I' or 'O' or 'u':
#     print("letter is vowel")
# else:
#     print("letter is not vowel")

def is_vowel(letter):
    # Convert the letter to lowercase for uniform comparison
    letter = letter.lower()
    
    # Define the vowels
    vowels = 'aeiou'
    
    # Check if the letter is a vowel
    if letter in vowels:
        return True
    else:
        return False

# Get user input
user_input = input("Enter a letter: ")

# Check if the input is a single letter and then check if it is a vowel
if len(user_input) == 1 and user_input.isalpha():
    if is_vowel(user_input):
        print(f"{user_input} is a vowel.")
    else:
        print(f"{user_input} is not a vowel.")
else:
    print("Invalid input. Please enter a single letter.")
