import java.awt.Dimension;
import java.sql.*;
import javax.swing.*;

public class Assignment9 {
    public static void main(String[] args) {
        Connection conn = null;
        Statement stmt = null;
        ResultSet rs = null;
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/mydatabase", "root", "Sourav@45");
            stmt = conn.createStatement();

            String createTableSQL = "CREATE TABLE IF NOT EXISTS student ("
                    + "roll_number INT PRIMARY KEY,"
                    + "name VARCHAR(50),"
                    + "percentage FLOAT"
                    + ")";
            stmt.executeUpdate(createTableSQL);

            String insertDataSQL = "INSERT INTO student (roll_number, name, percentage) VALUES "
                    + "(1, 'John Doe', 85.5), "
                    + "(2, 'Jane Smith', 92.0), "
                    + "(3, 'Bob Johnson', 77.3), "
                    + "(4, 'Alice Lee', 91.8)";
            stmt.executeUpdate(insertDataSQL);

            String querySQL = "SELECT * FROM student";
            rs = stmt.executeQuery(querySQL);

            String[] columnNames = {"Roll Number", "Name", "Percentage"};
            Object[][] data = new Object[4][3]; 
            int i = 0;
            while (rs.next()) {
                data[i][0] = rs.getInt("roll_number");
                data[i][1] = rs.getString("name");
                data[i][2] = rs.getFloat("percentage");
                i++;
            }
            JTable table = new JTable(data, columnNames);

            JScrollPane scrollPane = new JScrollPane(table);
            scrollPane.setPreferredSize(new Dimension(400, 200));

            JFrame frame = new JFrame("Student Table");
            JPanel panel = new JPanel();
            panel.add(scrollPane);
            frame.add(panel);
            frame.pack();
            frame.setVisible(true);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            try {
                if (rs != null) {
                    rs.close();
                }
                if (stmt != null) {
                    stmt.close();
                }
                if (conn != null) {
                    conn.close();
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
