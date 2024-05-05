list_x = [1,2,3,4]
list_x2 = [5,6,7,8]
if len(list_x) == len(list_x2):
    Dict = {list_x[i]: list_x2[i] for i in range(len(list_x))}
    print(Dict)
else:
    print("Lengths of list are not equal")
