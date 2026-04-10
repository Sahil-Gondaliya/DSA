#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        int length = str.length();

        (length > 10) ? cout << str[0] << length - 2 << str[length-1] : cout << str;
        cout << "\n";
    }
    return 0;
}