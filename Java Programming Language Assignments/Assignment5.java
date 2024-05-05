class FirstThread implements Runnable {
    @Override
    public void run() {
        while (true) {
            int number = (int) (Math.random() * 100 + 1);
            System.out.println("Generated number: " + number);
            if (number % 2 == 0) {
                new Thread(new SecondThread(number)).start();
            } else {
                new Thread(new ThirdThread(number)).start();
            }
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}

class SecondThread implements Runnable {
    private int number;

    public SecondThread(int number) {
        this.number = number;
    }

    @Override
    public void run() {
        System.out.println("Square of " + this.number + " is " + (this.number * this.number));
    }
}

class ThirdThread implements Runnable {
    private int number;

    public ThirdThread(int number) {
        this.number = number;
    }

    @Override
    public void run() {
        System.out.println("Cube of " + this.number + " is " + (this.number * this.number * this.number));
    }
}

public class Assignment5 {
    public static void main(String[] args) {
        new Thread(new FirstThread()).start();
    }
}
