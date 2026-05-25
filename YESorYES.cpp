#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t-->0)
    {
        string s; cin >> s;
        
        for (auto &x : s) 
        {
            x = toupper(x);
        }

        if (s == "YES")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}