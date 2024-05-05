while True:
    try:
        num = int(input('Enter a number: '))
        break
    except ValueError:
        print('Incorrect Input')
print('You entered: ', num)
