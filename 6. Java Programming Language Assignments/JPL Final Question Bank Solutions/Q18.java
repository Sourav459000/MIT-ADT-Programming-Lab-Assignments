import java.io.*;

public class Q18 {
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        PrintWriter pw = new PrintWriter(new OutputStreamWriter(System.out));
        
        int m, n, p, q;
        
        try {
            pw.println("Enter the number of rows and columns of the first matrix:");
            m = Integer.parseInt(br.readLine());
            n = Integer.parseInt(br.readLine());

            int[][] matrix1 = new int[m][n];
            
            pw.println("Enter the elements of the first matrix:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    matrix1[i][j] = Integer.parseInt(br.readLine());
                }
            }
            pw.println("Enter the number of rows and columns of the second matrix:");
            p = Integer.parseInt(br.readLine());
            q = Integer.parseInt(br.readLine());
            
            int[][] matrix2 = new int[p][q];
            
            pw.println("Enter the elements of the second matrix:");
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < q; j++) {
                    matrix2[i][j] = Integer.parseInt(br.readLine());
                }
            }
            if (n != p) {
                pw.println("Error: Number of columns of first matrix is not equal to number of rows of second matrix.");
                System.exit(0);
            }
            int[][] result = new int[m][q];

            for (int i = 0; i < m; i++) {
                for (int j = 0; j < q; j++) {
                    for (int k = 0; k < n; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                }
            }
            pw.println("Result of matrix multiplication:");
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < q; j++) {
                    pw.print(result[i][j] + " ");
                }
                pw.println();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        pw.flush();
        pw.close();
    }
}
