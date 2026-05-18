#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while (t-->0)
    {
        int n; cin >> n;
        int steps = 0;
        bool impossible = false;

        while (n != 1 )
        {
            if (n % 3 != 0)
            {
                impossible = true;
                break;
            }
            else if (n % 6 == 0)
            {
                n /= 6;
                steps++;
            }
            else
            {
                n *= 2;
                steps++;
            }
        }
        if (impossible) cout << "-1" << endl;
        else            cout << steps << endl;
    }
    return 0;
}