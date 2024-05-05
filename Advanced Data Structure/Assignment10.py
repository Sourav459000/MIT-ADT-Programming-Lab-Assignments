import os

filename = "employee.txt"
fields = ["Employee ID", "Name", "Designation", "Salary"]

def add_employee():
    print("Enter employee data: ")
    data = []
    for field in fields:
        value = input(f"{field}: ")
        data.append(value)

    with open(filename, "a") as file:
        file.write(",".join(data) + "\n")

    print("Employee added successfully.")

def delete_employee():
    employee_id = input("Enter employee ID: ")

    with open(filename, "r+") as file:
        contents = file.readlines()

        file.seek(0)
        file.truncate()

        deleted = False
        for line in contents:
            if not line.startswith(employee_id + ","):
                file.write(line)
            else:
                deleted = True

        if deleted:
            print("Employee deleted successfully.")
        else:
            print("Employee not found.")

def view_employee():
    employee_id = input("Enter employee ID: ")

    with open(filename, "r") as file:
        for line in file:
            if line.startswith(employee_id + ","):
                data = line.strip().split(",")
                for i in range(len(fields)):
                    print(f"{fields[i]}: {data[i]}")
                break
        else:
            print("Employee not found.")

while True:
    print("Menu:")
    print("1. Add employee")
    print("2. Delete employee")
    print("3. View employee data")
    print("4. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_employee()
    elif choice == "2":
        delete_employee()
    elif choice == "3":
        view_employee()
    elif choice == "4":
        break
    else:
        print("Invalid choice. Please try again.")

print("Exiting...")