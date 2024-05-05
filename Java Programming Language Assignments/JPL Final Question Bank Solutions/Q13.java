public class Q13 {
    public int add(int x, int y) {
        return x + y;
    }

    public double add(double x, double y) {
        return x + y;
    }

    public int add(int x, int y, int z) {
        return x + y + z;
    }

    public static void main(String[] args) {
        Q13 math = new Q13();
        int sum1 = math.add(1, 2);
        double sum2 = math.add(1.5, 2.5);
        int sum3 = math.add(1, 2, 3);
        System.out.println("Sum1: " + sum1);
        System.out.println("Sum2: " + sum2);
        System.out.println("Sum3: " + sum3);
    }
}
