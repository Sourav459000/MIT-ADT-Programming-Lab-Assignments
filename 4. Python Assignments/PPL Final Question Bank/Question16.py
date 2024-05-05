num_list = []
num_of_ele = int(input("Enter the number of elements:\n"))
for i in range(num_of_ele):
    ele = int(input("Enter the integer:"))
    num_list.append(ele)

print(num_list)
print(f"The length of {num_list} is: {len(num_list)}.")
print(f"The third element in {num_list} is {num_list[2]}.")

if len(num_list) > 10 and num_list.count(num_list[2]) == 2:
    print("True")
else:
    print("False")

num_list.sort()
print(f"After sorting in ascending order : {num_list}.")
