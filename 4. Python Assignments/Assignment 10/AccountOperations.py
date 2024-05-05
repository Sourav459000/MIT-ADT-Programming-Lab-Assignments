from abc import ABC, abstractmethod

class AccountOperations(ABC):

    @abstractmethod
    def add_customer(self, cust):
        pass

    @abstractmethod
    def check_balance(self, account_number):
        pass

    @abstractmethod
    def withdraw_amount(self, account_number, amount):
        pass

    @abstractmethod
    def deposit_amount(self, account_number, amount):
        pass

    @abstractmethod
    def change_pin(self, account_number, pin):
        pass

    @abstractmethod
    def display_account_info(self):
        pass