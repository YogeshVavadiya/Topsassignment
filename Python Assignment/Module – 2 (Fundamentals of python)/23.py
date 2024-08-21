# Write a Python function to insert a string in the middle of a string

def insert_in_middle(main_string, insert_string):
    middle_index = len(main_string) // 2
    result_string = main_string[:middle_index] + insert_string + main_string[middle_index:]
    return result_string

main_string = input("Enter the main string: ")
insert_string = input("Enter the string to insert: ")
result = insert_in_middle(main_string, insert_string)
print("Resulting string:", result)
