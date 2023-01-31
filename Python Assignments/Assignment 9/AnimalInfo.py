from AnimalShelterServiceImpl import AnimalShelterServiceImpl
class Animal:

    def __init__(self, aid, name, age, type, owner):
        self.animal_id = aid
        self.name = name
        self.age = age
        self.type = type
        self.owner = owner

    def __str__(self):
        return f'id : {self.animal_id}, name : {self.name}, age : {self.age}, type:{self.type},' \
               f'owner : {self.owner}'


a1 = Animal(1, "Tommy",  4, "dog", "")
a2 = Animal(2, "Max",  2, "cat", "")
a3 = Animal(3, "Tiger",  1, "dog", "")
a4 = Animal(4, "Mani",  1.2, "cat", "")
a5 = Animal(5, "Peter",  4, "rabbit", "")
a6 = Animal(6, "Roger",  0.6, "rabbit", "")
a7 = Animal(7, "Anaya",  3, "cow", "")
a8 = Animal(8, "Devi",  10, "cow", "")

impl = AnimalShelterServiceImpl()
impl.add_animal(a1)
impl.add_animal(a2)
impl.add_animal(a3)
impl.add_animal(a4)
impl.add_animal(a5)
impl.add_animal(a6)
impl.add_animal(a7)
impl.add_animal(a8)

impl.show_all_animals()

impl.adopt_dog("Prince")
impl.adopt_cat("Raju")
impl.adopt_rabbit("Smita")
impl.adopt_other_animals("Vishwa")
print("______________________________________________________________________")
print("______________________________________________________________________")
impl.show_all_animals()