list_ = []
list__ = []
for i in range(4):
    name = input(f"Enter the {i+1} name:\n")
    number = input(f"Enter the number of {name}:\n")
    list_.append(name)
    list__.append(number)

contacts = {list_[i]:list__[i] for i in range(len(list_))}
for name, cellno in contacts.items():
    print(f'{name:10}:{int(cellno):10d}')
