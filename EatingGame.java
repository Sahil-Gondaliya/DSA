
import java.util.Scanner;


public class EatingGame 
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

       while ( t-- > 0) 
        {
            int p = sc.nextInt();
            int[] dishes = new int[p];

            for (int i = 0; i < p; i++)
            {
                dishes[i] = sc.nextInt();
            }

            int max = dishes[0];

            for (int i = 0; i < p; i++)
            {
                if(dishes[i] > max)
                {
                    max = dishes[i];
                }
            }

            int winner = 0;
            
            for(int i = 0; i < p; i++)
            {
                if(dishes[i] == max)
                {
                    winner++;
                }
            }

            System.out.println(winner);
        }
        
        sc.close();
    }
}