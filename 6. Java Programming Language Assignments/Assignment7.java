import java.awt.*;
import java.awt.event.*;

public class Assignment7 extends Frame {
    Assignment7() {
        setLayout(null);

        Label l1 = new Label("First Number");
        Label l2 = new Label("Second Number");
        add(l1);
        add(l2);

        TextField t1 = new TextField(15);
        TextField t2 = new TextField(15);
        add(t1);
        add(t2);

        Button b1 = new Button("Addition");
        Button b2 = new Button("Difference");
        Button b3 = new Button("Multiplication");
        Button b4 = new Button("Division");
        add(b1);
        add(b2);
        add(b3);
        add(b4);

        Label l3 = new Label("Result");
        TextField t3 = new TextField(15);
        add(l3);
        add(t3);

        l1.setBounds(50, 50, 200, 30);
        l2.setBounds(50, 125, 200, 30);
        t1.setBounds(250, 50, 150, 40);
        t2.setBounds(250, 125, 150, 40);
        b1.setBounds(20, 200, 100, 50);
        b2.setBounds(125, 200, 100, 50);
        b3.setBounds(235, 200, 100, 50);
        b4.setBounds(345, 200, 100, 50);
        l3.setBounds(50, 280, 200, 30);
        t3.setBounds(250, 280, 150, 40);

        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                String n1 = t1.getText();
                String n2 = t2.getText();

                Float num1 = Float.parseFloat(n1);
                Float num2 = Float.parseFloat(n2);

                Float result;
                result = num1 + num2;

                String ans = String.valueOf(result);
                t3.setText(ans);
            }
        });

        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                String n1 = t1.getText();
                String n2 = t2.getText();

                Float num1 = Float.parseFloat(n1);
                Float num2 = Float.parseFloat(n2);

                Float result;
                result = num1 - num2;

                String ans = String.valueOf(result);
                t3.setText(ans);
            }
        });

        b3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                String n1 = t1.getText();
                String n2 = t2.getText();

                Float num1 = Float.parseFloat(n1);
                Float num2 = Float.parseFloat(n2);

                Float result;
                result = num1 * num2;

                String ans = String.valueOf(result);
                t3.setText(ans);
            }
        });

        b4.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent ae) {
                String n1 = t1.getText();
                String n2 = t2.getText();

                Float num1 = Float.parseFloat(n1);
                Float num2 = Float.parseFloat(n2);

                Float result;
                result = num1 / num2;

                String ans = String.valueOf(result);
                t3.setText(ans);
            }
        });

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });

        setVisible(true);
        setSize(500, 500);
        setTitle("My Calculator");
        setBackground(Color.orange);
    }

    public static void main(String[] args) {
        new Assignment7();
    }
}
