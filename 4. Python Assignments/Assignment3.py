s1 = "Sourav is brother of Gaurav."
s2 = " Sourav lives in a hostel"

# copy
name = "Sourav"
copy = name[:]
print(copy)

# concatenate
concatenate = s1+s2
print(concatenate)

# substring
s4 = input("Enter the word to find in strings: \n")
s5 = concatenate.find(s4)
if s4 in concatenate:
    print("Word found")
else:
    print("Word not found")

# equal
print("Enter 2 words to check if they are equal: \n")
var1 = input()
var2 = input()
if var1 == var2:
    print("Words are equal.")
else:
    print("Words are not equal.")


# reverse string
s3 = s1[::-1]
print("The reverse of s1 is: ", s3)

# length of string
print("Length of s1 is: ", len(s1))
