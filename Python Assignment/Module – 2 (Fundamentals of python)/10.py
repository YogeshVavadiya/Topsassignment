# Write a Python program that will return true if the two given integer 
# values are equal or their sum or difference is 5

no1 = int(input("Enter First  no :  "))
no2 = int(input("Enter Second no :  "))
sum = no1 + no2
dif = no1 - no2

print(f"Sum of {no1} and {no2} is       : ",sum )
print(f"Diffrence of {no1} and {no2} is : ",dif )


if no1 == no2 or sum == 5 or dif == 5:
    print("True, values are equal or their sum or difference is 5")
else:
    print("False")