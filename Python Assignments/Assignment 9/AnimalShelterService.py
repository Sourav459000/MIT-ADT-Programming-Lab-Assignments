from abc import ABC, abstractmethod

class AnimalShelterService(ABC):

    @abstractmethod
    def add_animal(self, animal):
        pass

    @abstractmethod
    def adopt_dog(self, owner):
        pass

    @abstractmethod
    def adopt_cat(self, owner):
        pass

    @abstractmethod
    def adopt_rabbit(self, owner):
        pass

    @abstractmethod
    def adopt_other_animals(self, owner):
        pass

    @abstractmethod
    def show_all_animals(self):
        pass