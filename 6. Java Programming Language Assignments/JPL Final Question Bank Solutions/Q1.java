import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {

            System.out.println("Enter first Integer:");
            int firstNumber = scanner.nextInt();
            
            System.out.println("Enter second Integer:");
            int secondNumber = scanner.nextInt();
            
            System.out.println("Enter third Integer:");
            int thirdNumber = scanner.nextInt();
            
            System.out.println("Enter fourth Integer:");
            int fourthNumber = scanner.nextInt();
            
            if ((firstNumber == secondNumber) && (secondNumber == thirdNumber) && (thirdNumber == fourthNumber)) {
                System.out.println("All four Integers are equal.");
            }
            else{
                System.out.print("All four Integers are not equal.");
            }
        }
    }
} 
