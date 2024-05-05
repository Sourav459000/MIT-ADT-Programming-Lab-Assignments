from AnimalShelterService import AnimalShelterService

class AnimalShelterServiceImpl(AnimalShelterService):

    list_of_animal = []
    def add_animal(self, animal):
        self.list_of_animal.append(animal)

    def adopt_dog(self, owner):
        for i in self.list_of_animal:
            if i.type == 'dog' and i.age >= 3:
                i.owner = owner

    def adopt_cat(self, owner):
        for i in self.list_of_animal:
            if i.type == 'cat' and i.age >= 2:
                i.owner = owner

    def adopt_rabbit(self, owner):
        for i in self.list_of_animal:
            if i.type == 'rabbit' and i.age >= 1:
                i.owner = owner

    def adopt_other_animals(self, owner):
        for i in self.list_of_animal:
            if i.type == 'cow' and i.age >= 5:
                i.owner = owner

    def show_all_animals(self):
        for i in self.list_of_animal:
            print(i)