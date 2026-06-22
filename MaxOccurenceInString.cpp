#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    int max_occ = 1;
    int occ = 1;
    char max_char;

    for(int i=1; i<s.size(); i++)
    {
        if(s[i-1] == s[i])
        {
            occ++;
            if (occ > max_occ)
            {
                max_occ = occ;
                max_char = s[i];
            }
        }
        else
        {
            occ = 1;
        }
    }
    cout << max_char<< endl << max_occ;
}