import java.awt.*;
import java.awt.event.*;

public class Q28 extends Frame implements ActionListener {
    private Label nameLabel;
    private TextField nameTextField;
    private Label emailLabel;
    private TextField emailTextField;
    private Label addressLabel;
    private TextArea addressTextArea;
    private Label genderLabel;
    private CheckboxGroup genderCheckboxGroup;
    private Checkbox maleCheckbox;
    private Checkbox femaleCheckbox;
    private Label courseLabel;
    private Choice courseChoice;
    private Label messageLabel;
    private Button submitButton;

    public Q28() {
        setLayout(new GridLayout(7, 2));
        setTitle("Student Registration Form");

        nameLabel = new Label("Name:");
        add(nameLabel);
        nameTextField = new TextField();
        add(nameTextField);

        emailLabel = new Label("Email:");
        add(emailLabel);
        emailTextField = new TextField();
        add(emailTextField);

        addressLabel = new Label("Address:");
        add(addressLabel);
        addressTextArea = new TextArea();
        add(addressTextArea);

        genderLabel = new Label("Gender:");
        add(genderLabel);
        genderCheckboxGroup = new CheckboxGroup();
        maleCheckbox = new Checkbox("Male", genderCheckboxGroup, false);
        add(maleCheckbox);
        femaleCheckbox = new Checkbox("Female", genderCheckboxGroup, false);
        add(femaleCheckbox);

        courseLabel = new Label("Course:");
        add(courseLabel);
        courseChoice = new Choice();
        courseChoice.add("Java");
        courseChoice.add(".NET");
        courseChoice.add("PHP");
        courseChoice.add("Python");
        add(courseChoice);

        messageLabel = new Label();
        add(messageLabel);
        submitButton = new Button("Submit");
        add(submitButton);
        submitButton.addActionListener(this);

        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent windowEvent) {
                dispose();
            }
        });

        setSize(400, 400);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == submitButton) {
            String name = nameTextField.getText();
            String email = emailTextField.getText();
            String address = addressTextArea.getText();
            String gender = maleCheckbox.getState() ? "Male" : "Female";
            String course = courseChoice.getSelectedItem();

            messageLabel.setText("Name: " + name + ", Email: " + email + ", Address: " + address + ", Gender: " + gender + ", Course: " + course);
        }
    }

    public static void main(String[] args) {
        new Q28();
    }
}
