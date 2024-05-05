def func():
    a,b,c,d,e = map(int, input("Enter 5 integers:\n").split())
    calculate_sum = a+b+c+d+e
    calculate_product = a*b*c*d*e
    print(f"Sum of 5 integers is {calculate_sum}.")
    print(f"Product of 5 integers is {calculate_product}.")


func()
