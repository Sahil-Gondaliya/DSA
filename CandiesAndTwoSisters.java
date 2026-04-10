import java.util.Scanner;

public class CandiesAndTwoSisters
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0 ; i<n ; i++)
        {
            long candies = sc.nextInt();
            System.out.println( (candies-1) / 2);
        }
        sc.close();
    }
}