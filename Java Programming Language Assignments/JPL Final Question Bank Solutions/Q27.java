import java.util.Scanner;

class AgeChecker extends Thread {
    private int age;

    public AgeChecker(int age) {
        this.age = age;
    }

    public void run() {
        if (age >= 18) {
            System.out.println("You are eligible for voting!");
        } else {
            System.out.println("You are not eligible for voting!");
        }
    }
}

public class Q27 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        AgeChecker ageChecker = new AgeChecker(age);
        ageChecker.start();
    }
}
