from AccountOperationsImpl import AccountOperationsImpl

class Account:

    def __init__(self, account_number, name, balance , pin):
        self.account_number = account_number
        self.customer_name = name
        self.balance = balance
        self.pin = pin

    def __str__(self):
        return f'Account_number : {self.account_number}, customer_name : {self.customer_name}, ' \
               f'balance : {self.balance}, pin : {self.pin}'


    def __repr__(self):
        return str(self)

a1 = Account(1234, "Sandesh", 120000, 3456)
a2= Account(1235, "Amit", 23400, 4321)
impl = AccountOperationsImpl()
impl.add_customer(a1)
impl.add_customer(a2)
impl.display_account_info()
print("_______________________________________________________________________")
impl.deposit_amount(1235, 20000)
impl.display_account_info()
print("_______________________________________________________________________")
impl.withdraw_amount(1234, 60000)
impl.display_account_info()
print("_______________________________________________________________________")
impl.change_pin(1234, 9876)
impl.display_account_info()
print("_______________________________________________________________________")
