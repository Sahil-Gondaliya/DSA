#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        sort(s.begin(), s.end());
        int count=1;

        for(int i=1; i<n; i++)
        {
            if(s[i-1] == s[i])
            {
                count++;
            }
            else
            {
                if (count % 2 != 0)
                {
                    k--;
                } 
                count = 1;
            }
        }
        // last group
        if(count % 2 != 0)
        {
            k--;
        }

        cout << k << endl;
        if (k >= 0 && k % 2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}