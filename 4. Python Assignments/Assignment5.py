#a. Write a Python program to find a list of Strings with exactly two occurrences of “MIT”
#and at least one occurrence of “ADT”.
#Input: [“MIT”, “SOE”, “MIT” , “ADTU”, “ADT”, “Loni”, “Design”, “Food”, “Technology”]
var = ["MIT", "SOE", "MIT" , "ADTU", "ADT", "Loni", "Design", "Food", "Technology"]
MITcount = var.count("MIT")
ADTcount = var.count("ADT")
if MITcount == 2 and ADTcount>=1:
    print(f"The occurrence of MIT is {MITcount} and that of ADT is {ADTcount}. ")
else:
    print("Condition not satisfied.")


# b. Extend the program for the following integer inputs.
# Input: [100, 35, 23, 100, 45, 89, 90]     //Exactly 2 occurrences of 100 and at least 2 occurrences of 90
# Input: [90, 110, 130, 150, 170, 200, 200]   //At Least 2 occurrences of 200 and exactly one occurrence of 130
var1 = [100, 35, 23, 100, 45, 89, 90]
Huncount = var1.count(100)
nincount = var1.count(90)
if Huncount == 2 and nincount >=2:
    print(f"The occurrence of 100 in list is {Huncount} times and the occurrence of 90 in the same list is {nincount}.")
else:
    print(f"The occurrence of 100 in list is {Huncount} times and the occurrence of 90 in the same list is {nincount}. Hence condition is not satisfied")

var2 = [90, 110, 130, 150, 170, 200, 200]
twocount = var2.count(200)
onecount = var2.count(130)
if twocount == 2 and onecount == 1:
    print(f"The occurrence of 200 in list is {twocount} times and the occurrence of 130 in the same list is {onecount}.")
else:
    print("Condition not satisfied.")

# c. Write a Python program that accepts a list of integers and checks the length and the
# third element. Return true if the length of the list is more than 10 and the third element
# occurs twice in the said list
A = list(input("Enter the elements of the array: ").split())
print(A[2])
B = len(A[2])
C = len(A)
print("The length of the 3rd element of the list is: ",B)
if B>10 and A.count(A[2])>1:
    print("True")
else:
    print("False")

# #d. Sort the list in ascending order.
var1 = [100, 35, 23, 100, 45, 89, 90]
var1.sort()
print(var1)




