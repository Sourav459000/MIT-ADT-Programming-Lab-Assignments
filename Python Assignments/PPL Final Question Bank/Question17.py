def divide(x, y):
    try:
        result = x / y
        print("\n")
        print("Yeah ! Your answer is :", result)
    except ZeroDivisionError:
        print("\n")
        print("Sorry ! You are dividing by zero ")


print("Output A:\n")
num1 = int(input("Enter first number :"))
num2 = int(input("Enter second number :"))
divide(num1, num2)

print("\nOutput B:")

file1 = input("Enter file name :")
try:
    file = open('file1')
except Exception as e:
    print('File not found. Check the name of file.')

print("\nOutput C:")

num3 = input("Enter first number :")
num4 = int(input("Enter second number :"))
try:
    print(num3 + num4)
except TypeError:
    print("\nInvalid input,both the inputs should be of same datatype")

print("\nOutput D:")


list_ = []
num = int(input("Enter the number of elements in the list:"))
for ele in range(num):
    num_ = input("Enter the elements:")
    list_.append(num_)

search = int(input("Enter the index:"))

try:
    print(list_[search])
except:
    print("Index error")
    