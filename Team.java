import java.util.Scanner;

public class Team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int team[][] = new int[n][3];
        int count=0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<3; j++) {
                team[i][j] = sc.nextInt();
            }
            if (team[i][0] + team[i][1] + team[i][2]>=2) {
                count++;
            }
        }
        System.out.println(count);

        sc.close();
    }
}
