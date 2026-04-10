#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int x=0;
    cin >> n;
    string str;

    for(int i=0; i<n; i++)
    {
        cin>> str;
        (str[1] == '+') ? x++ : x--;
    }
    cout << x;
    return 0;
}