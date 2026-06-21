#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        // already not sorted
        bool sorted = true;
        for(int i = 1; i < n; i++)
        {
            if(a[i] < a[i-1])
            {
                sorted = false;
                break;
            }
        }

        if(!sorted)
        {
            cout << 0 << endl;
            continue;
        }

        int min_diff = a[1] - a[0];

        for(int i = 1; i < n; i++)
        {
            min_diff = min(min_diff, a[i] - a[i-1]);
        }

        cout << (min_diff / 2) + 1 << endl;
    }

    return 0;
}