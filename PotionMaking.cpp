#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int k;
        cin >> k;

        int g = __gcd(k, 100 - k);

        cout << 100 / g << endl;
    }

    return 0;
}