#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n; cin >> n;
        string s; cin >> s;

        int count = 0;
        int dots = 0;
        bool found = false;

        for(int i=0; i<s.size(); i++)
        {
            if (s[i] == '.')
            {
                count++;
                dots++;
            }
            else
            {
                count = 0;
            }

            if (count >= 3)
            {
                found = true;
                break;
            }
        }

        if(found) cout << "2\n";
        else cout << dots << endl;
    }
    return 0;
}