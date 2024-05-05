import java.util.Scanner;

public class Q19 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        try {
            System.out.print("Enter a number: ");
            int num1 = Integer.parseInt(sc.nextLine());
        
            System.out.print("Enter another number: ");
            int num2 = Integer.parseInt(sc.nextLine());
        
            int result = num1 / num2;
        
            System.out.println("Result: " + result);
        } catch (NumberFormatException e) {
            System.out.println("Invalid input: " + e.getMessage());
        } catch (ArithmeticException e) {
            System.out.println("Cannot divide by zero: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("An error occurred: " + e.getMessage());
        }
        sc.close();
    }
}
