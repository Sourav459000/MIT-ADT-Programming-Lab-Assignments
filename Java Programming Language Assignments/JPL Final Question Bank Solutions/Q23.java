import java.util.Scanner;

public class Q23 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.println("Enter your choice (1, 2, or 3):");
        int choice = input.nextInt();

        switch (choice) {
            case 1:
                System.out.println("You selected option 1");
                break;
            case 2:
                System.out.println("You selected option 2");
                break;
            case 3:
                System.out.println("You selected option 3");
                break;
            default:
                System.out.println("Invalid choice");
        }

        System.out.println("Printing iterations from 1 to 5:");
        for (int i = 1; i <= 5; i++) {
            if (i == choice) {
                System.out.println("Skipping iteration " + i);
                continue;
            }
            System.out.println("Iteration " + i);
        }
    }
}
