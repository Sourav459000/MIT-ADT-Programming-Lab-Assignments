public class Q14 {
    private String name;
    private int age;

    public Q14() {
        name = "Unknown";
        age = 0;
    }

    public Q14(String name) {
        this.name = name;
        age = 0;
    }

    public Q14(int age) {
        name = "Unknown";
        this.age = age;
    }

    public Q14(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public static void main(String[] args) {
        Q14 person1 = new Q14();
        Q14 person2 = new Q14("John");
        Q14 person3 = new Q14(25);
        Q14 person4 = new Q14("Jane", 30);

        System.out.println("Person 1: " + person1.getName() + ", " + person1.getAge());
        System.out.println("Person 2: " + person2.getName() + ", " + person2.getAge());
        System.out.println("Person 3: " + person3.getName() + ", " + person3.getAge());
        System.out.println("Person 4: " + person4.getName() + ", " + person4.getAge());
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }
}
