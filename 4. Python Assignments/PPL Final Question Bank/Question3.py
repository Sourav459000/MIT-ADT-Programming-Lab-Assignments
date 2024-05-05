terms = int(input("Enter the number of terms:\n"))


def fib(num):
    if num == 1 or num == 0:
        return num
    elif num < 0:
        print("Invalid input")
    else:
        end_answer = fib(num - 1) + fib(num - 2)
        return end_answer


print(f"Fibonacci series for {terms} terms is: \n")
num=0
while num != terms+1:
    print(fib(num))
    num = num +1
