#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;

        int w1 = max(s1, s2);
        int w2 = max(s3, s4);

        int a[4] = {s1, s2, s3, s4};
        sort(a, a + 4);

        if(min(w1, w2) == a[2] && max(w1, w2) == a[3])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}