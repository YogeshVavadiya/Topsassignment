"""Write a Python program to remove elements from a list using pop() and remove()."""

list1 = [1,2,3,4,5,6,7] #create a Empty list

list1.remove(3)#we can remove element by element name with using of remove method

list1.pop(1)#Here we can remove element by index wise with pop method

list1.pop()#Without giving argument to pop removes the last indexed element from the list

print(list1)

