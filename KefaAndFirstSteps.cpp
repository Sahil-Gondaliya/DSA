#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_seq=1;
    int seq=1;

    for (int i = 1; i < n; i++)
    {
        if(a[i] >= a[i-1])
        {
            seq++;
        }
        else
        {
            seq = 1;
        }
        
        if(seq > max_seq)
        {
            max_seq = seq;
        }
    }
    cout << max_seq;
    
}