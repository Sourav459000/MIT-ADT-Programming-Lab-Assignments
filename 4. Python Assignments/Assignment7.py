# Write a Python function to ‐
# ● find the Max of three numbers


def Max_Of_Three():
    a, b, c = [int(x) for x in input("Enter three numbers: ").split(" ")]
    if a > b and a > c:
        print(f"{a} is greater than both {b} and {c}")
    elif b > a and b > c:
        print(f"{b} is greater than both {a} and {c}")
    elif c > a and c > b:
        print(f"{c} is greater than both {b} and {a}")


Max_Of_Three()


# ● multiply all the numbers in a list


def Mul_Of_List():
    list1 = []
    n = int(input("Enter the total number of elements in list: \n"))
    for ele in range(n):
        ele = int(input("Enter the element: "))
        list1.append(ele)
    mul = 1
    for i in list1:
        mul = mul * i
    print("Multiplication of elements in list: ", mul)


Mul_Of_List()


# ● create a list of all even numbers between 19 and 88

def even_in_19_88():
    list2 = []
    for i in range(19, 89):
        if i % 2 == 0:
            list2.append(i)
    print(list2)


even_in_19_88()

# ● display the current date and time and get the Python version
from datetime import datetime


def date_time():
    now = datetime.now()
    print("now =", now)


date_time()
