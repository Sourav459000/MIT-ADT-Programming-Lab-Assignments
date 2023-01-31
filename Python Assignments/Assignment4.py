# lower = int(input("Enter min:\n"))
# upper = int(input("Enter max:\n"))
# count = 0
# c=0
#
#     # if x%2==0:
#     #     count = count+1
#     # if x%2!=0:
#     #     c = c+1
#
# # print("Even number: ",count)
# # print("Odd numbers: ",c)

c = 0
count = 0
k=0
m = int(input("Enter starting range: "))
n = int(input("Enter ending range: "))
a = False
for x in range(m, n+1):
    if x%5==0 and x%9==0:
        print("Numbers divisible by 5 and multiple of 9 are: ",x)
print("1-Prime, 2-Even, 3-Odd")
choice = int(input("Enter your choice: "))
for i in range(m, n + 1):
    if choice == 1:
        if i == 1:
            c=c
        elif i == 2:
            c += 1
        else:
            for j in range(2,i):
                if i%j == 0:
                    a = False
                    break
                else:
                    a = True
        if a == True:
            c += 1 #counting prime
    elif choice == 2:
        if i % 2 == 0:
            count +=1

    elif choice == 3:
        if i % 2 != 0:
            k +=1
if choice == 1:
    print("Prime numbers: ",c)
if choice == 2:
    print("Even numbers: ",count)
if choice == 3:
    print("Odd numbers: ",k)
