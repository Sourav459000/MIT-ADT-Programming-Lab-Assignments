# #write the program to find biggest number from two numbers.
# var1, var2= [int(input("Enter num1: ")),int(input("Enter num2: "))]
# if var1>var2 :
#     print("Number 1 is greater than number 2.")
# elif var1==var2 :
#     print("Number 1 is equal to number 2.")
# elif var1<var2 :
#     print("Number 2 is greater than number 1.")

# #write the program to find biggest number from three numbers.
# a,b,c = [int(x) for x in input("Enter three numbers: ").split(" ")]
# if a>b and a>c:
#     print("a is greater than both b and c")
# elif b>a and b>c:
#     print("b is greater than both a and c")
# elif c>a and c>b:
#     print("c is greater than both b and a")

# #write a program to check if inputed number is in range 1 to 100
# a = int(input("Enter the number: "))
# if a in range(1,101):
#     print("Number is in the range 1 to 100.")
# else :
#     print("Number is not in the range 1 to 100.")
# a = int(input("Enter the number: "))
# if a>=1 and a<=100 :
#     print("Number is in the range 1 to 100.")
# else :
#     print("Number is not in the range 1 to 100.")

# #print number 10 to 1
# for x in range(10,0,-1):
#     print(x)

# cur.execute("CREATE DATABASE employee") #Database banane ke liye
# s = "CREATE TABLE EMPLOYEE(Srno integer(4), project_name varchar(50),team_members varchar(100),tech_used varchar(200),deadline varchar(50))" #Table ka name and columns
# cur.execute(s) #Table banane ke liye

# t = "INSERT INTO EMPLOYEE (Srno , project_name ,team_members ,tech_used ,deadline ) VALUES(%s,%s,%s,%s,%s)" #Insert karne ke liye
# Employees = [(1, 'Touropedia', 'Sourav Manjiri Sanjana Sannya', 'python', '15 nov 2022'),  (2, 'Yatracharya', 'Sourav Manjiri Sanjana Sannya', 'python', '15-11-2022'), (3, 'Marg-Darshan', 'Sourav Manjiri Sanjana Sannya', 'python', '15th Nov 2022')] #multiple entries
# cur.executemany(t, Employees) #multiple entry
# mydb.commit()

# u = "select * from employee" #Table ka data lene ke liye
# cur.execute(u) #Execution
# result = cur.fetchall() #result naam ke list me sab save kiya
# for rec in result: #rec result list ke ander wale tuple he
#     print(rec) #tuple ko print karwaya

# table update ke liye https://youtu.be/_MZsPXUhYPs

# v = "DELETE FROM employee WHERE deadline = '15th nov 2022'"
# cur.execute(v)
# mydb.commit()
