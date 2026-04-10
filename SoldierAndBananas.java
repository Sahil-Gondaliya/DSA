import java.util.Scanner;

public class SoldierAndBananas {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int firstbnn = sc.nextInt();
        int pocket = sc.nextInt();
        int bnnwant = sc.nextInt();
        int bnncost=0;

        for (int i=1; i<=bnnwant; i++)
        {
            bnncost = bnncost + (i*firstbnn);
        }
        if (bnncost>pocket) 
        {
            System.out.println(bnncost-pocket);
        }
        else
        {
            System.out.println("0");
        }
        sc.close();
    }
}
