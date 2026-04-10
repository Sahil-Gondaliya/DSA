#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    str[0] = toupper(static_cast<unsigned char>(str[0]));
    
    cout << str;
    return 0;
}
