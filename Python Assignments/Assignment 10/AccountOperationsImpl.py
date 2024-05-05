from AccountOperations import AccountOperations
class AccountOperationsImpl(AccountOperations):
    list_of_customer = []

    def add_customer(self, cust):
        self.list_of_customer.append(cust)


    def check_balance(self, account_number):
        for i in self.list_of_customer:
            if i.account_number == account_number:
                print(i)


    def withdraw_amount(self, account_number, amount):

        for i in self.list_of_customer:
            if i.account_number == account_number:
                print(i.balance)
                i.balance = i.balance-amount
        print("Amount Withdrown Successfully ")


    def deposit_amount(self, account_number, amount):

        for i in self.list_of_customer:
            if i.account_number == account_number:
                i.balance = i.balance + amount
        print("Amount Deposited Successfully ")

    def change_pin(self, account_number, pin):
        for i in self.list_of_customer:
            if i.account_number == account_number:
                i.pin = pin

    def display_account_info(self):
        for i in self.list_of_customer:
            print(i)
