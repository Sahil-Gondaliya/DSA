#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(4);
    for(int i=0; i<4; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int count = 0;

    for (int i = 1; i < 4; i++)
    {
        if(a[i-1] == a[i])  count++;
    }
    
    cout << count;

    return 0;
}