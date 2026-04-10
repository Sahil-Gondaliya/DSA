    import java.util.Scanner;

    public class NearlyLuckyNumber 
    {
        public static void main(String[] args) 
        {
            Scanner sc = new Scanner(System.in);
            long no = sc.nextLong();
            int count=0;

            while (no>0) 
            {
                long temp = no%10;
                if(temp==7 || temp==4)
                {
                    count++;
                }
                no=no/10;
            }
            if (count==7||count==4) 
            {
                System.out.println("YES");
            }
            else 
            {
                System.out.println("NO");
            }
            sc.close();
        }
    }
