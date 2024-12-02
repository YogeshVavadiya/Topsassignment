"""• Write a Python program to merge two lists into one dictionary using a loop."""

dict = {} 

l1 = [1,2,3,4] # we store lq element as key in dict
l2 = ['a','b','c','d']# we store l2 element as value in dict

for i in range(4): #we itret length of l1 len(l1)
    dict[l1[i]]=l2[i] 
print(dict)


# zip_f = dict(zip(l1,l2)) # zip() pair l1,l2 and dict() converts into dictnory
# print(zip_f)

