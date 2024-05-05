public class Q30 {
    public static void main(String[] args) {
        try {
            int a[] = new int[5];
            a[6] = 10; // this will throw an ArrayIndexOutOfBoundsException
            try {
                int x = 10 / 0; // this will throw an ArithmeticException
            } catch (ArithmeticException e) {
                System.out.println("Arithmetic exception caught inside inner try block: " + e.getMessage());
            }
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array index out of bounds exception caught inside outer try block: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Exception caught outside of nested try-catch blocks: " + e.getMessage());
        }
    }
}
