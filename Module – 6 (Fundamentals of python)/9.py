# Write a Python program to sum of three given integers. However, if two values are equal sum will be zero

no1 = int(input("Enter No 1 : "))
no2 = int(input("Enter No 2 : "))
no3 = int(input("Enter No 3 : "))

if no1==no2:
    if no1==no3:
        print("Two No is same")
    else:
        print("Two no is same")
else:
    print(no1+no2+no3)