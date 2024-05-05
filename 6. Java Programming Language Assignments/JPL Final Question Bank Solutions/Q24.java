import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Q24 extends JFrame implements ActionListener {
    private JButton addButton, subtractButton, multiplyButton, divideButton;
    private JTextField num1Field, num2Field, resultField;

    public Q24 () {
        setTitle("Simple Calculator");
        setSize(400, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JLabel num1Label = new JLabel("Number 1: ");
        JLabel num2Label = new JLabel("Number 2: ");
        JLabel resultLabel = new JLabel("Result: ");
        num1Field = new JTextField(10);
        num2Field = new JTextField(10);
        resultField = new JTextField(10);
        resultField.setEditable(false); 

        addButton = new JButton("+");
        subtractButton = new JButton("-");
        multiplyButton = new JButton("*");
        divideButton = new JButton("/");

        addButton.addActionListener(this);
        subtractButton.addActionListener(this);
        multiplyButton.addActionListener(this);
        divideButton.addActionListener(this);

        Container contentPane = getContentPane();
        contentPane.setLayout(new GridLayout(5, 2));
        contentPane.add(num1Label);
        contentPane.add(num1Field);
        contentPane.add(num2Label);
        contentPane.add(num2Field);
        contentPane.add(resultLabel);
        contentPane.add(resultField);
        contentPane.add(addButton);
        contentPane.add(subtractButton);
        contentPane.add(multiplyButton);
        contentPane.add(divideButton);

        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        try {
            double num1 = Double.parseDouble(num1Field.getText());
            double num2 = Double.parseDouble(num2Field.getText());

            if (e.getSource() == addButton) {
                double result = num1 + num2;
                resultField.setText(Double.toString(result));
            } else if (e.getSource() == subtractButton) {
                double result = num1 - num2;
                resultField.setText(Double.toString(result));
            } else if (e.getSource() == multiplyButton) {
                double result = num1 * num2;
                resultField.setText(Double.toString(result));
            } else if (e.getSource() == divideButton) {
                double result = num1 / num2;
                resultField.setText(Double.toString(result));
            }
        } catch (NumberFormatException ex) {
            resultField.setText("Error: Invalid input");
        }
    }

    public static void main(String[] args) {
        new Q24 ();
    }
}
