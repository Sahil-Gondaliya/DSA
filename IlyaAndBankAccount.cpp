#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;

    if (n >= 0)
    {
        cout << n;
    }
    else 
    {
        int tmp = n%10;
        int rem_lastsec = (n / 100) * 10 + (tmp);

        cout << max(n/10 , rem_lastsec);
    }
    return 0;
}