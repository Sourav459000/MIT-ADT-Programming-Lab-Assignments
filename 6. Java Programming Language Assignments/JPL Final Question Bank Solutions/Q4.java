import java.util.Scanner;

class Student {
    private String name;
    private String city;
    private int age;
    Scanner scanner = new Scanner(System.in);

    public void addData() {
        System.out.println("Enter the Name, City and Age of student: ");
        String name = scanner.nextLine();
        String city = scanner.nextLine();
        int age = scanner.nextInt();
        this.name = name;
        this.city = city;
        this.age = age;
    }

    public void printData() {
        System.out.println("Name: " + this.name);
        System.out.println("City: " + this.city);
        System.out.println("Age: " + this.age);
    }
}

public class Q4 {
    public static void main(String[] args) {
        Student s1 = new Student();
        s1.addData();
        Student s2 = new Student();
        s2.addData();

        System.out.println("Details of Student 1:");
        s1.printData();
        System.out.println("Details of Student 2:");
        s2.printData();
    }
}
