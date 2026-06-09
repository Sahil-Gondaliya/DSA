#include <bits/stdc++.h>
using namespace std;

int main()
{
    string direction, word;
    cin >> direction >> word;

    string keyboard = "qwertyuiop[]asdfghjkl;'zxcvbnm,./";

    for (char c : word)
    {
        int pos = keyboard.find(c);

        if(direction == "R")
            cout << keyboard[pos - 1];
        else
            cout << keyboard[pos + 1];
    }

    return 0;
}