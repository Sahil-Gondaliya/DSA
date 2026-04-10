
import java.util.Scanner;

public class BeautifulMatrix {
    public static void main(String[] args) {
        int[][]matrics = new int[5][5];
        Scanner sc = new Scanner(System.in);
        int i1 =0;
        int j1 =0;

        for (int i = 0; i < 5; i++) 
        {
            for (int j = 0; j < 5; j++)
            {
                matrics[i][j] = sc.nextInt();
                if (matrics[i][j]==1) 
                {
                    i1=i;
                    j1=j;
                }
            }
        }

        System.out.println(Math.abs(i1-2) + Math.abs(j1-2));

        sc.close();
    }
}
