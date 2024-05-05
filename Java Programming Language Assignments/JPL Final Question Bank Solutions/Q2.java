import java.util.Scanner;

class Student2 {
    private String name;
    private String rollno;
    private int marks;
    Scanner scanner = new Scanner(System.in);
    public void getData() {
        System.out.println("Enter the Name, Roll No. and Marks of student: ");
        String name = scanner.nextLine();
        String rollno = scanner.nextLine();
        int marks = scanner.nextInt();
        this.name = name;
        this.rollno = rollno;
        this.marks = marks;
    }

    public void printData() {
        System.out.println("Name: " + this.name);
        System.out.println("Roll number: " + this.rollno);
        System.out.println("Marks: " + this.marks);
    }
}
public class Q2 {
    public static void main(String[] args) {
        Student2 s1=new Student2();
        Student2 s2=new Student2();
        s1.getData();
        s2.getData();
        System.out.println("\nDetails of Student 1 are:");
        s1.printData();
        System.out.println("\nDetails of Student 2 are:");
        s2.printData();
    }
} 
