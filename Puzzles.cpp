#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin >> n >> m;

    int f[m];
    for(int i=0; i<m; i++)
    {
        cin >> f[i];
    }

    sort(f, f+m);

    int min_diff = f[m-1]-f[0];
    int diff;
    
    for (int i = 0; i < m-n+1; i++)
    {
        diff = f[i+n-1] - f[i];
        if (diff < min_diff)
        {
            min_diff = diff;
        }
    }
    
    cout << min_diff;
    return 0;
}