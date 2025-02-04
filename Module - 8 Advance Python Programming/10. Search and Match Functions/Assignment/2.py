""" 24) Write a Python program to match a word in a string using re.match()"""

import re

word = "language"
string = "Python is a programming language"

if re.match(word, string): # match() returns true matching word is first in the string
    print("Word found")
else:
    print("Word not found")

