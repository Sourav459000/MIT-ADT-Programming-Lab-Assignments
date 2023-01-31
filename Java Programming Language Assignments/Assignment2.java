import java.util.Scanner;

class Student2
{
    private String name, city;
    private int age;
    Scanner scanner = new Scanner(System.in);

    public void getData()
    {
        System.out.println("Enter the name, name of city and age of student:");
        name = scanner.next();
        city = scanner.next();
        age = scanner.nextInt();
    }
    public void printData()
    {
        System.out.println("Student name: " + name + ", Student city: " + city + ", Student age: " + age);
    }
}
public class Assignment2 {
    public static void main(String[] args) {
        Student2 s1=new Student2();
        Student2 s2=new Student2();
        s1.getData();
        s1.printData();
        s2.getData();
        s2.printData();
    }
}