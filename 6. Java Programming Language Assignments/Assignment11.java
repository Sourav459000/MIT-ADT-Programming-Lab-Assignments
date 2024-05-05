import java.sql.*;

public class Assignment11 {
    static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver";
    static final String DB_URL = "jdbc:mysql://localhost/employees";

    static final String USER = "root";
    static final String PASS = "Sourav@45";

    public static void main(String[] args) {
        Connection conn = null;
        Statement stmt = null;
        try{
            Class.forName(JDBC_DRIVER);

            System.out.println("Connecting to database...");
            conn = DriverManager.getConnection(DB_URL,USER,PASS);

            System.out.println("Creating statement...");
            stmt = conn.createStatement();

            String sql = "INSERT INTO employees (first_name, last_name, age) " +
                         "VALUES ('John', 'Doe', 25)";
            stmt.executeUpdate(sql);

            sql = "DELETE FROM employees WHERE last_name='Doe'";
            stmt.executeUpdate(sql);

            sql = "UPDATE employees SET age = 30 WHERE last_name='Smith'";
            stmt.executeUpdate(sql);

            sql = "SELECT * FROM employees";
            ResultSet rs = stmt.executeQuery(sql);

            while(rs.next()){
                int id  = rs.getInt("id");
                String first = rs.getString("first_name");
                String last = rs.getString("last_name");
                int age = rs.getInt("age");

                System.out.print("ID: " + id);
                System.out.print(", First Name: " + first);
                System.out.print(", Last Name: " + last);
                System.out.println(", Age: " + age);
            }

            rs.close();
            stmt.close();
            conn.close();
        }catch(SQLException se){
            se.printStackTrace();
        }catch(Exception e){
            e.printStackTrace();
        }finally{
            try{
                if(stmt!=null)
                    stmt.close();
            }catch(SQLException se2){
            }
            try{
                if(conn!=null)
                    conn.close();
            }catch(SQLException se){
                se.printStackTrace();
            }
        }
        System.out.println("Goodbye!");
    }
}
