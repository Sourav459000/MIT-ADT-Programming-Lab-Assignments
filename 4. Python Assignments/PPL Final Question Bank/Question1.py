num = int(input("Enter the number of rows to print\n"))
n = 1
for i in range(1,num+1):
    for j in range(1, i+1):
        print(n,end=" ")
        n = n + 1
    print()
