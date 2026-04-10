#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1,str2;
    cin >> str1 >> str2;

    for (int i = 0; i < str1.length(); i++)
    {
        if (towupper(str1[i]) > towupper(str2[i]))
        {
            cout << "1";
            return 0;
        }
        else if (towupper(str1[i]) < towupper(str2[i]))
        {
            cout << "-1";
            return 0;
        }
    }
    cout << "0";
    return 0;
}