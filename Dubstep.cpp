#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    int size = s.size();
    bool firstWord = true;

    for (int i = 0; i < size;)
    {
        if (s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' && i+2 < size)
        {
            i += 3;
            if (!firstWord & i<size)
            {
                cout << " ";
            }
            
        }
        else
        {
            cout << s[i];
            i++;
            firstWord = false;
        }
    }
    
    return 0;
}