"""Write	a	generic	program	to	handle	exception	generated	in	following	scenarios:
● Division	by	Zero
● Accessing	a	file	which	does	not	exist.
● Addition	of	two	incompatible	types
● Trying	to	access	a	nonexistent	index	of	a	sequence"""


def divide(x, y):
    try:
        result = x // y
        print("Yeah ! Your answer is :", result)
    except ZeroDivisionError:
        print("Sorry ! You are dividing by zero ")


print("Output A:")
divide(3, 2)
divide(3, 0)

print("\n")
print("Output B:")

try:
    file = open('student.txt')
except Exception as e:
    print('File not found. Check the name of file.')

print("\n")
print("Output C:")
try:
    print('10' + 10)
    print(1 / 0)
except (TypeError, ZeroDivisionError):
    print("Invalid input")

print("\n")
print("Output D:")


class SuperDuperList(list):
    def getindexdefault(self, elem, default):
        try:
            thing_index = self.index(elem)
            return thing_index
        except ValueError:
            print("IndexError"+""+"Trying to access	a nonexistent index	of a sequence")


mylist = SuperDuperList([0, 1, 2])
index = mylist.getindexdefault('asdf', -1)
