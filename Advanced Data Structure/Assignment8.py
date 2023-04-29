def display_hash(hashTable):
    for i in range(len(hashTable)):
        print(i,end=" ")
        if hashTable[i] is not None:
            j = 0
            while j < len(hashTable[i]):
                print("--> ", end=" ")
                print(hashTable[i][j], end=" ")
                j += 1
        print() 
        
HashTable = [None] * 10 

def Hashing(keyvalue, size):
    return keyvalue % 10

def insert(hashTable, keyvalue, value):
    hash_key = Hashing(keyvalue, len(hashTable))
    if hashTable[hash_key] is None:
        hashTable[hash_key] = (keyvalue, value)
    else:
        while hashTable[hash_key] is not None and hashTable[hash_key][0] != keyvalue:
            hash_key = (hash_key + 1) % len(hashTable)
        hashTable[hash_key] = (keyvalue, value)

num_entries = int(input("Enter the number of entries: "))

for i in range(num_entries):
    keyvalue = int(input("Enter the key value: "))
    value = input("Enter the value: ")
    insert(HashTable, keyvalue, value)

display_hash(HashTable)      

# list1=[]
# j=1
# y=int(input("Enter the array size:"))

# for i in range(y):
#     list1.append(0)
# print("Initial array is:",list1)

# for k in range (y):
#     x=int(input("Enter the value:"))
#     h=x%y
#     z=h
#     if list1[h]==0:
#         list1[h]=x
#         print(list1)
#     else:
#         while (list1[h]!=0):
#             h=(h+j)%y
#         if list1[z]%y==z:
#             list1[h]=x
#         else:
#             list1[h]=list1[z]
#             list1[z]=x
#         print(list1)