// import java.util.Scanner;

// public class CalculatingFunction 
// {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         long ans=0;
//         long n = sc.nextLong();
//         for (long i = 1; i <= n; i++) 
//         {
//             ans =  ans + ((long)Math.pow(-1, i)*i);
//         }   
//         System.out.print(ans);
//         sc.close();
//     }
// }
import java.util.Scanner;

public class CalculatingFunction
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        if (n%2==0) 
        {
            System.out.println(n/2);
        }
        else
        {
            System.out.println((-(n+1))/2);
        }
    }
}