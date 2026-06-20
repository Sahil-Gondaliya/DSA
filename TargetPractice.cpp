#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        char board[10][10];
        int score = 0;
        int temp_i, temp_j;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> board[i][j];
                if(board[i][j] == 'X')
                {
                    temp_i = i;
                    temp_j = j;
                    if(temp_i > 4) temp_i = 9 - temp_i;
                    if(temp_j > 4) temp_j = 9 - temp_j;

                    score += min(temp_i,temp_j) + 1;
                }
            }   
        }
        cout << score << endl;
    }
    return 0;
}