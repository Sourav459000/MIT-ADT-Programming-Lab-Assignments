import java.util.Scanner;

public class Assignment1{
    public static void main(String[] args) {
        try (Scanner scanner = new Scanner(System.in)) {
            System.out.println("Enter four Integers:");
            int firstNumber = scanner.nextInt();
            int secondNumber = scanner.nextInt();
            int thirdNumber = scanner.nextInt();
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