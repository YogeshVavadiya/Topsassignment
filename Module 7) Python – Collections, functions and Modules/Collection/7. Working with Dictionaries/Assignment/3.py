"""17) Write a Python program to convert two lists into one
dictionary using a for loop."""

dict = {}# create empty dict

list1 = ["Subject","english","hindi","gujarati"]#list1 is store as keys in dict
list2 = ["Marks",90,91,92]#list2 is store as values in dict

for i in range(len(list1)): # itreting the element len(list1)
    dict[list1[i]]=list2[i] # store list1[first element as key] = list2[first element as value]

print(dict)










# for k,v in dict.items():
#     print(k ,":", v)


# # dynamic dict
# for i in range(1,6):
#     keys = input("Enter a key ")
#     values = input("Enter a value ")
#     dict[keys]=values