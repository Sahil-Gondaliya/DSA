#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        bool found = false;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if (a[i] == k)
            {
                found = true;
            }
        }
        
        if(found) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}