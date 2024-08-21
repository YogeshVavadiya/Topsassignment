# • Write a Python function that takes a list of words and returns the length 
# of the longest one.

def length_of_longest_word(word_list):
    max_length = 0
    for i in word_list:
        if len(i) > max_length:
            max_length = len(i)
    return max_length

words = ["apple", "banana", "strawberry", "kiwi"]
longest_length = length_of_longest_word(words)
print("Length of the longest word:", longest_length)
