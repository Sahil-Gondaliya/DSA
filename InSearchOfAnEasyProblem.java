
import java.util.Scanner;

public class InSearchOfAnEasyProblem 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int opinion;
        int count = 0;
        for (int i = 0; i < n ; i++)
        {
            opinion = sc.nextInt();
            if (opinion ==1) {
                count++;
            }
        }
        sc.close();
        if (count == 0) System.out.println("EASY");
        else System.out.println("HARD");
    }
}
