num=int(input("Enter number of rows : "))
lterm = 1
rterm = num * num + 1
for i in range(num, -1, -1):
    for space in range(num, i-1, -1):
        print(" ", end =" ")
    for j in range(1, i + 1):
        print(str(lterm)+"*", end ="")
        lterm += 1
    for j in range(1, i + 1):
        print(rterm, end ="")
        if j < i:
            print("*", end ="")
        rterm += 1
    rterm = rterm - (i - 1) * 2 - 1
    print()