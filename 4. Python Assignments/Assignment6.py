# a.Write a Python program to convert two lists into a dictionary in a way that item from list1
# is the key and item from list2 is the value

list_key = ['A', 'B', 'C', 'D']
list_value = [1, 2, 3, 4]
Dict = {list_key[i]: list_value[i] for i in range(len(list_key))}
print("Resultant Dictionary is: "+str(Dict))

# other methods
# d = dict(zip(list_key,list_value))

# d={}
# if len(list_key)==len(list_value):
#     for i in range (len(list_key)):
#         d[list_key[i]]=d[list_value[i]]

# b. Write a Python script to generate and print a dictionary that contains a number (between
# 1 and n) in the form (x, square of x)

list_x = []
list_x2 = []
n = int(input("Enter the value of n: "))
for x in range(1,n+1):
    list_x.append(x)
    list_x2.append(x**2)
Dict = {list_x[i]: list_x2[i] for i in range(len(list_x))}
print(Dict)

# c. Write a Python program to create a dictionary storing movie details such as  ‐ (Movie
# name: show timings) and perform the following operations
# i. Add a new movie
movie = {"3 idiots": 3, "83": 6, "Hera Pheri": 9}
print("Original Dictionary: ", movie)
movie["Lagaan"] = 12
print("After addition of movie: ",movie)

# ii. Display movies available at 9 pm
print("Movies at 9: ", list(movie.keys())
      [list(movie.values()).index(9)])

# iii. Remove the details of the specific movie
del movie["83"]
print("After deleting 83: ", movie)

# iv. Remove the last movie details
movie.popitem()
print("After removing the last movie details: ", movie)