""" Write a Python program to match a word in a string using re.match()."""

import re


word = "Python"
string = "Python is a programming language"

if re.match(word, string):
    print("Word found")
else:
    print("Word not found")


 