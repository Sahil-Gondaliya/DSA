import java.util.Scanner;

public class Magnets
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] magnet = new int[n];
        int count = 1;
        for (int i = 0; i < n; i++) 
        {
            magnet[i] = sc.nextInt();
        }
        for (int i = 1; i < n; i++) 
        {
            if (magnet[i-1] != magnet[i]) 
            {
                count++;
            }
        }
        sc.close();
        System.out.println(count);
    }
}