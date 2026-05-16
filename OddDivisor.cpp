#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while (t-->0)
    {
        long long n; cin >> n;

        if (n % 2 != 0)
        {
            cout << "YES\n";
        }
        else
        {
            while(n%2 == 0)
            {
                n = n/2;
            }

            if (n == 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}