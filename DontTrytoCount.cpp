#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n,m;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        int steps = 0;
        bool found = false;

        while(x.size() < s.size())
        {
            // if(x.find(s) != string::npos)
            // {
            //     found = true;
            //     break;
            // }
            x += x;
            steps++;
        }

        

        if (x.find(s) != string::npos)
        {
            found = true;
        }
        else
        {
            x+=x;
            steps++;
            if (x.find(s) != string::npos)
            {
                found = true;
            }
        }
        

        if(found) cout << steps << endl;
        else cout << "-1" << endl;
    }
    return 0;
}