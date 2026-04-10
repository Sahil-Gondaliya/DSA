
import java.util.Scanner;

public class Trial 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        String[] parts = line.split("\\s");
        int a = Integer.parseInt(parts[0]);
        int b = Integer.parseInt(parts[1]);
        int c = Integer.parseInt(parts[2]);
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
    }
}
