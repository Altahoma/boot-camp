import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x, y;
        
        x = in.nextInt();
        y = in.nextInt();
        
        System.out.println(x+y);
        
        in.close();
    }
}