import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.sql.Statement;

public class DBConnection {

    public static void main(String[] args) {

        // Load and register the JDBC driver
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");

            // Establish a connection
            String url = "jdbc:mysql://localhost:3306/";
            String user = "root";
            String password = "Darkeyed@123";
            Connection connection = DriverManager.getConnection(url, user, password);

            // Create a statement object
            Statement statement = connection.createStatement();

            // Check if the connection is established
            if (connection != null) {
                System.out.println("Connection Established!");
            }
        } 
        catch (ClassNotFoundException | SQLException e) {
            e.printStackTrace();
        }
    }
}
