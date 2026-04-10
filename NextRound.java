import java.util.Scanner;

public class NextRound {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] score = new int[n];
        int count = 0;

        for (int i = 0; i < n; i++) 
        {
            score[i] = sc.nextInt();
        }
        sc.close();

        for (int i = 0; i < n; i++)
        {
            if (score[i]>=score[k-1] && score[i]>0) 
            {
                count++;
            }
            else
            {
                break;
            }
        }
        System.out.println(count);
    }
}