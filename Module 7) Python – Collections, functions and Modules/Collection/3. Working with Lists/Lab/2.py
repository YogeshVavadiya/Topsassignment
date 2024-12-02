"""• Write a Python program to sort a list using both sort() and sorted()."""

list2 = ["b","a","s","q","r","d"]

list1 = [8,9,7,6,5,4,5,4,3,4]

list1.sort()#sort() method is only works in list and change orignal list 
print(list1)#here we print and the list is change to sort

print(sorted(list2))
#sorted() function is works in list,tupel,dict,set and returns a new list without changing orignal list
print(list2)#we print list and the list is still in origanl form