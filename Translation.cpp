#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;

    string s2 = "";
    int j = s.size() - 1;

    for(int i=0; i<s.size(); i++)
    {
        s2 += s[j];
        j--;
    }

    if(s2 == t)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}