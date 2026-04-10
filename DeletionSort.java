import java.util.*;

public class DeletionSort {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) 
        {
            int x = sc.nextInt();
            int[] testcase = new int[x];

            for (int j = 0; j < x ; j++)
            {
                testcase[j] = sc.nextInt();
            }
            boolean sorted = true;

            for (int j = 1; j < x; j++) 
            {
                if (testcase[j-1] > testcase[j]) 
                {
                    sorted = false;
                    break;
                }
            }

            if (!sorted) {
                System.out.println("1");
            }
            else
            {
                System.out.println(x);
            }
            
        }

        sc.close();
    }
}
