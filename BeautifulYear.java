import java.util.Scanner;

public class BeautifulYear {
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        int d1,d2,d3,d4;

        while(year<10000)
        {
            year++;
            d1 = year % 10;
            d2 = (year/10) % 10;
            d3 = (year/100) % 10;
            d4 = (year/1000) % 10;

            if (d1 != d2 && d1 != d3 && d1 != d4 && d2 != d3 && d2 != d4 && d3 != d4) 
            {
                System.out.println(year);
                break;
            }
        }
        sc.close();
    }
}