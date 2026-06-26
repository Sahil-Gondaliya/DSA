#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int gold = 0;
        int count = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x >= k)
            {
                gold += x;
            }
            else if(x == 0 && gold > 0)
            {
                gold--;
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
