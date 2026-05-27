#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, q;
        cin >> n >> q;

        int a[n];

        int total = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        // prefix sum
        int prefix[n];

        prefix[0] = a[0];

        for(int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] + a[i];
        }

        while(q--)
        {
            int l, r, k;
            cin >> l >> r >> k;

            int oldSum;

            if(l == 1)
                oldSum = prefix[r-1];
            else
                oldSum = prefix[r-1] - prefix[l-2];

            int len = r-l+1;

            int sum =   total - oldSum + (len*k);

            if(sum % 2 != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}