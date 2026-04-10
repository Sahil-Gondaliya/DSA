
import java.util.Scanner;

public class VanyaAndFence {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int fance = sc.nextInt();
        int count=0;
        for (int i = 0; i < n; i++) 
        {
            int h = sc.nextInt();
            if (h>fance) 
            {
                count = count +2;
            }
            else
            {
                count++;
            }
        }
        System.out.println(count);
    }
}
