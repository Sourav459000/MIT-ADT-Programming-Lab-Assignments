odd5 = [1,3,5,7,9]
even5 = [2,4,6,8,10]

print(f"list of 5 odd number = {odd5}.\n")
print(f"list of 5 even number = {even5}.\n")
combine = odd5 + even5
print(f"After combining {odd5} and {even5}: {combine}\n")
combine.insert(0,11)
combine.insert(1,17)
combine.insert(2,29)
print(f"After inserting 11, 17 and 29 at beginning: {combine}\n")
print(f"Number of elements in {combine} are {len(combine)}\n")
combine[len(combine)-1] = 300
combine[len(combine)-2] = 200
combine[len(combine)-3] = 100
print(f"After replacing last 3 elements in combine with 100,200 and 300: {combine}\n")

combine.reverse()
print(f"Reversing the list:{combine}\n")

combine.clear()
print(f"After deleting the list : {combine}\n")
