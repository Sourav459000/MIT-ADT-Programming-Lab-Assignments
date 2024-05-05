import mysql.connector
mydb = mysql.connector.connect(
    host="localhost",
    user="root",
    password="Sourav@45",
    database='student'
    )
cur = mydb.cursor()
# cur.execute("CREATE DATABASE student")
# a = "CREATE TABLE student(Srno integer(4), project_name varchar(50),team_members varchar(100),tech_used varchar(200),deadline varchar(50))"
# cur.execute(a)

# 1. Accept [Project name, Team members, Technologies used, Project completion deadline]


def accept():
    b = "INSERT INTO student (Srno , project_name ,team_members ,tech_used ,deadline ) VALUES(%s,%s,%s,%s,%s)"
    Srno = int(input("Enter Team Number:"))
    project_name = input("Enter project name:")
    team_members = input("Enter team members(seperate them with space):")
    tech_used = input("Enter the technology used:")
    deadline = input("Enter the deadline:")
    c = [Srno, project_name, team_members, tech_used, deadline]
    d = tuple(c)
    cur.execute(b,d)
    mydb.commit()
    print("The data you just entered is now stored in database.")

# 2. Display ‐ displays the details of every Project


def display():
    e = "select * from student"
    cur.execute(e)
    result = cur.fetchall()
    for rec in result:
        print(rec)

# 3. Search ‐ Look for a specific student and the project on which he or she is working #ERROR


def search():
    m = input("Enter the name of the student: ")
    n = "select * from student WHERE team_members = %s"
    o = [m]
    cur.execute(n,o)
    record = cur.fetchmany()
    print(record)

# 4. Delete ‐ delete a particular record (based on either project/student)


def delete():
    f = input("Enter the name of project you want to delete record for:")
    g = "DELETE FROM student WHERE project_name = %s"
    h = [f]
    cur.execute(g,h)
    mydb.commit()
    print(f"The records of {f} project now have been deleted from the database.")


# 5. Update ‐ Update the team members for a particular project


def update():
    i = input("Enter the team members for a particular project you want to update data for:")
    j = input("Enter the new team members for a particular project:")
    k = "UPDATE student SET team_members = %s WHERE team_members = %s"
    l = [j, i]
    cur.execute(k, l)
    mydb.commit()
    print(f"Name of team members have been updated to {j} from {i}.")


def task1():
    task = int(input('''Choose the task from the following:
1. Accept the detail.
2. Display the details.
3. Search the detail.
4. Delete the detail.
5. Update the detail.\n'''))
    if task == 1:
        accept()
    elif task == 2:
        display()
    elif task == 3:
        search()
    elif task == 4:
        delete()
    elif task == 5:
        update()
    else:
        print("Input error! Try again.")
        task1()


task1()
