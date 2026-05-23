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

        string s; 
        cin >> s;

        sort(s.begin(), s.end());

        int count = 1;
        int odd = 0;

        for(int i = 1; i < n; i++)
        {
            if(s[i-1] == s[i])
            {
                count++;
            }
            else
            {
                if(count % 2 != 0)
                {
                    odd++;
                }

                count = 1;
            }
        }

        // last group
        if(count % 2 != 0)
        {
            odd++;
        }

        if(odd <= k + 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
