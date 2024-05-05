interface Vehicle {
    void start();
    void stop();
}

interface Camera {
    void takePicture();
    void recordVideo();
}

class Car implements Vehicle, Camera {
    public void start() {
        System.out.println("Starting car engine");
    }
    public void stop() {
        System.out.println("Stopping car engine");
    }
    public void takePicture() {
        System.out.println("Taking car photo");
    }
    public void recordVideo() {
        System.out.println("Recording car video");
    }
}

public class Q25 {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.start(); 
        myCar.takePicture(); 
    }
}
