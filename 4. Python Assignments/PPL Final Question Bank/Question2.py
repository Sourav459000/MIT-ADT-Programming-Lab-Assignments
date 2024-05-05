def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


a,b = map(int,input("Enter two numbers:\n").split())

print(f"The gcd of {a} and {b} is  ", end="")
print(gcd(a,b))

# OR

import math
a,b = map(int,input("Enter two numbers:\n").split())

gcd1 = math.gcd(a,b)
print(gcd1)