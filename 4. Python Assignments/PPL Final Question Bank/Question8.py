item_list = ["Soya stick","kurkure","Maggie","Soup","Cosmetics"]
item_price = [130,10,102,10,200]
shopping = {item_list[i]:item_price[i] for i in range(len(item_price))}

wanna_try_again = "Y"

while wanna_try_again:
    print(f"Initial Dictionary: {shopping}")
    new_item = input("Enter the name of the item you want to add:\n")
    new_item_price = int(input(f"Enter the price of {new_item}:\n"))
    shopping[new_item] = new_item_price
    print(f"Dictionary after adding {new_item} and {new_item_price}: {shopping}")
    value = {i for i in shopping if shopping[i] > 100}
    print("Products with price more than 100:\n", value)
    which_one = input("Enter the name of the item you want to remove from the cart:\n")
    shopping.pop(which_one)
    print(f"Dictionary after removing {which_one}: {shopping}")
    shopping.popitem()
    print(f"Dictionary after removing last item: {shopping}")
    wanna_try_again = input("Enter 'Y to perform again:\n").upper()
