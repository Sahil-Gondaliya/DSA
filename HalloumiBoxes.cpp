#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while(t-->0)
    {
        int n,k; cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];

        if (k == 1)
        {
            bool sorted = true;

            for(int i=1; i<n; i++)
            {
                if (a[i-1] > a[i])
                {
                    sorted = false;
                    break;
                }
            }

            if(sorted) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

        else
        {
            cout << "YES" << endl;
        }
        
    }
    return 0;
}