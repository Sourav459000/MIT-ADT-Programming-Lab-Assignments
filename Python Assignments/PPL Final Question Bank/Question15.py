file = open('file.txt', 'r')

while 1:
    char = file.read(1)
    if not char:
        break

    print(char)

file.close()
