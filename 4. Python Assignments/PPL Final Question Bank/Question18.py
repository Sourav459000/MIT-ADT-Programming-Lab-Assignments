try:
    while True:
        num = int(input('Enter a positive number: '))
        if num >= 0:
            print(num * num)
        else:
            raise ValueError('Negative number')
except ValueError as ve:
    print(ve.args)
