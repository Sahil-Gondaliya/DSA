#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    string vowels = "aeiouy";

    for(int i=0; i<s.size(); i++)
    {
        if(vowels.find(s[i]) != string::npos)
        {
            s.replace(i, 1, "");
            i--;
        }
    }

    for(int i=0; i<s.size(); i++)
    {
        cout << "." << s[i];
    }
    return 0;
}