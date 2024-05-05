public class Q20 implements Runnable {
    private String threadName;
    private Thread thread;
    private static int count = 0;
    private static final int MAX_COUNT = 10;
    
    public Q20(String name) {
        this.threadName = name;
        System.out.println("Creating thread: " + threadName);
    }
    
    public void run() {
        System.out.println("Running thread: " + threadName);
        try {
            for (int i = 0; i < MAX_COUNT; i++) {
                System.out.println(threadName + ": " + count);
                synchronized (this) {
                    count++;
                }
                Thread.sleep(100);
            }
        } catch (InterruptedException e) {
            System.out.println("Thread " + threadName + " interrupted.");
        }
        System.out.println("Exiting thread: " + threadName);
    }

    public void start() {
        System.out.println("Starting thread: " + threadName);
        if (thread == null) {
            thread = new Thread(this, threadName);
            thread.start();
        }
    }

    public void join() {
        try {
            thread.join();
        } catch (InterruptedException e) {
            System.out.println("Thread " + threadName + " interrupted.");
        }
    }

    public boolean isAlive() {
        return thread.isAlive();
    }

    public static void main(String[] args) {
        Q20 thread1 = new Q20("Thread 1");
        thread1.start();
        Q20 thread2 = new Q20("Thread 2");
        thread2.start();

        while (thread1.isAlive() || thread2.isAlive()) {
            if (thread1.isAlive()) {
                thread1.join();
            }
            if (thread2.isAlive()) {
                thread2.join();
            }
        }
        System.out.println("Final count: " + count);
    }
}