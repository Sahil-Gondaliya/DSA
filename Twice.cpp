#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n; cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int score = 0;
        sort (a, a+n);
        
        for (int i = 1; i < n; i++)
        {
            if (a[i-1] == a[i])
            {
                score++;
                i++;
            }
        }
        cout << score << endl;
    }
    return 0;
}