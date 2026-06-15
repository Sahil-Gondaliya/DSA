#include <bits/stdc++.h>
using namespace std;

void flipbits(vector<int>& arr, int x,int y)
{
    for(int i = x; i<=y; i++)
    {
        if (arr[i] == 1) arr[i] = 0;
        else arr[i] = 1;
    }
}

bool iseqtox(vector<int>& arr, int x)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if(arr[i] != x)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        vector<int> p(k);
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<k; i++) cin >> p[i];
        int x = a[p[0]-1];
        int steps=0;

        while(!iseqtox(a, x))
        {
            int start_idx = p[0]-1;
            int last_idx = p[0]-1;
            for (int i = 0; i < p[0]-1; i++)
            {
                if (a[i] != x)
                {
                    start_idx = i;
                    break;
                }
            }
            for (int i = a.size()-1; i > p[0]-1; i--)
            {
                if (a[i] != x)
                {
                    last_idx = i;
                    break;
                }
            }
            
            flipbits(a, start_idx, last_idx);

            steps++;
        }

        cout << steps << endl;
    }
    return 0;
}