import java.util.Scanner;

class Vehicle {
    String registrationNumber;
    String color;
    String typeOfVehicle;
    
    public Vehicle(String registrationNumber, String color, String typeOfVehicle) {
        this.registrationNumber = registrationNumber;
        this.color = color;
        this.typeOfVehicle = typeOfVehicle;
    }
    
    void displayDetails() {
        System.out.println("Registration number: " + registrationNumber);
        System.out.println("Color: " + color);
        System.out.println("Type of vehicle: " + typeOfVehicle);
    }
}

class Car extends Vehicle {
    String make;
    int CC;
    String fuelType;
    
    public Car(String registrationNumber, String color, String make, int CC, String fuelType) {
        super(registrationNumber, color, "Car");
        this.make = make;
        this.CC = CC;
        this.fuelType = fuelType;
    }
    
    void displayDetails() {
        super.displayDetails();
        System.out.println("Make: " + make);
        System.out.println("CC: " + CC);
        System.out.println("Fuel type: " + fuelType);
        System.out.println();
    }
}

class Truck extends Vehicle {
    String make;
    int CC;
    String fuelType;
    
    public Truck(String registrationNumber, String color, String make, int CC, String fuelType) {
        super(registrationNumber, color, "Truck");
        this.make = make;
        this.CC = CC;
        this.fuelType = fuelType;
    }
    
    void displayDetails() {
        super.displayDetails();
        System.out.println("Make: " + make);
        System.out.println("CC: " + CC);
        System.out.println("Fuel type: " + fuelType);
        System.out.println();
    }
}

class Motorcycle extends Vehicle {
    String make;
    int CC;
    String fuelType;
    
    public Motorcycle(String registrationNumber, String color, String make, int CC, String fuelType) {
        super(registrationNumber, color, "Motorcycle");
        this.make = make;
        this.CC = CC;
        this.fuelType = fuelType;
    }
    
    void displayDetails() {
        super.displayDetails();
        System.out.println("Make: " + make);
        System.out.println("CC: " + CC);
        System.out.println("Fuel type: " + fuelType);
        System.out.println();
    }
}

public class Q3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String rn1, rn2, rn3, c1, c2, c3, m1, m2, m3, f1, f2, f3;
        int  cc1, cc2, cc3;

        System.out.println("Enter the Registration Number, Color, Make, CC and fuel type of Car: ");
        rn1 = scanner.next();
        c1 = scanner.next();
        m1 = scanner.next();
        cc1 = scanner.nextInt();
        f1 = scanner.next();
        System.out.println("Enter the Registration Number, Color, Make, CC and fuel type of Truck: ");
        rn2 = scanner.next();
        c2 = scanner.next();
        m2 = scanner.next();
        cc2 = scanner.nextInt();
        f2 = scanner.next();
        System.out.println("Enter the Registration Number, Color, Make, CC and fuel type of Motorcycle: ");
        rn3 = scanner.next();
        c3 = scanner.next();
        m3 = scanner.next();
        cc3 = scanner.nextInt();
        f3 = scanner.next();

        Car car = new Car(rn1, c1, m1, cc1, f1);
        car.displayDetails();      
        Truck truck = new Truck(rn2, c2, m2, cc2, f2);
        truck.displayDetails();
        Motorcycle motorcycle = new Motorcycle(rn3, c3, m3, cc3, f3);
        motorcycle.displayDetails();  
    }
}
