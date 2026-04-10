
import java.util.Scanner;

public class HitTheLottery {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int money = sc.nextInt();

        int bills = 0;

        bills += money / 100;
        money %= 100;

        bills += money / 20;
        money %= 20;

        bills += money / 10;
        money %= 10;

        bills += money / 5;
        money %= 5;

        bills += money / 1;

        System.out.println(bills);

        sc.close();
    }
}