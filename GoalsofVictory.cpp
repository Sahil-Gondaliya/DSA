#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n; cin >> n;
        int a[n-1];
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        cout << -1*sum << endl;
    }
}