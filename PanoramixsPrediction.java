
import java.util.Scanner;

public class PanoramixsPrediction
{
    public static boolean Isprime(int n)
    {
        if( n <= 1 ) return false;

        for (int i = 2; i <= n / 2 ; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    public static void main(String arg[])
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();

        int nextPrime = n;

        while(true)
        {
            nextPrime++;
            if( Isprime(nextPrime) == true)
            {
                break;
            }
        }

        if (nextPrime == m) System.out.println("YES");
        else System.out.println("NO");
    }
}