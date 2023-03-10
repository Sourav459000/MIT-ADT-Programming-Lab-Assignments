import java.util.Scanner;

abstract class Shape {
    protected int width;
    protected int height;
    public abstract void printArea();
}

class Rectangle extends Shape {
    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }
    
    public void printArea() {
        int area = width * height;
        System.out.println("Rectangle Area: " + area);
    }
}

class Triangle extends Shape {
    public Triangle(int width, int height) {
        this.width = width;
        this.height = height;
    }
    
    public void printArea() {
        int area = (width * height) / 2;
        System.out.println("Triangle Area: " + area);
    }
}

class Circle extends Shape {
    protected int radius;

    public Circle(int radius) {
        this.radius = radius;
    }
    
    public void printArea() {
        double area = Math.PI * radius * radius;
        System.out.println("Circle Area: " + area);
    }
}

public class Assignment6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Whose area do you want to calculate? ");
        System.out.println("1. Rectangle\n2. Triangle\n3. Circle.\nEnter your choice: ");
        int choice = sc.nextInt();
        int width, height, radius;
        switch (choice) {
            case 1:
                System.out.println("Enter the width and height of rectangle: ");
                width = sc.nextInt();
                height = sc.nextInt();
                Shape rectangle = new Rectangle(width, height);
                rectangle.printArea();
                break;

            case 2:
                System.out.println("Enter the width and height of triangle: ");
                width = sc.nextInt();
                height = sc.nextInt();
                Shape triangle = new Triangle(width, height);
                triangle.printArea();
            
            case 3:
                System.out.println("Enter the radius of circle: ");
                radius = sc.nextInt();
                Shape circle = new Circle(radius);
                circle.printArea();

            default:
                break;
        }
    }
}
