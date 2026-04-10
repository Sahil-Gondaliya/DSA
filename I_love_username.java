
import java.util.Scanner;

public class I_love_username 
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int score[] = new int[n];
		int count = 0;

		for (int i = 0; i < n; i++)
		{
			score[i] = sc.nextInt();
		}
		
		int max = score[0];
		int min = score[0];

		for (int i = 1; i < n; i++) 
		{
			if (score[i] > max) 
			{
				count++;
				max = score[i];
			}
			else if (score[i] < min) 
			{
				count++;
				min = score[i];
			}
		}
		System.out.print(count);
		sc.close();
	}
}
