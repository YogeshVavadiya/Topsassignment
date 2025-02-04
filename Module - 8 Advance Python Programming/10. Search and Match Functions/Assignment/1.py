""" 23) Write a Python program to search for a word in a string using re.search()."""

import re

word = "Python"
string = "Python is a programming language"

if re.search(word, string):
    print("Word found")
else:
    print("Word not found")

    