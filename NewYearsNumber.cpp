#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while (t-->0)
    {
        int n; cin >> n;

        while (n>0)
        {
            if (n % 2020 == 0)
            {
                n -= 2020;
            }
            else
            {
                n -= 2021;
            }
        }
        if(n == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}