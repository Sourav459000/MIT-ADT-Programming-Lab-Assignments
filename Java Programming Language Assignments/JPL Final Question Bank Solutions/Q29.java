import java.util.Scanner;

public class Q29 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number between 1 and 100: ");
        try {
            int num = readNumber(sc);
            System.out.println("You entered: " + num);
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }

    public static int readNumber(Scanner sc) throws Exception {
        int num = sc.nextInt();
        if (num < 1 || num > 100) {
            throw new Exception("Invalid number! Please enter a number between 1 and 100.");
        }
        return num;
    }
}
