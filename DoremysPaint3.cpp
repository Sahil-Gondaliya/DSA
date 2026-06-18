#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t-->0)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end());
        
        int count1 = 1; 
        int count2 = 0;
        int distinct = 1;

        for(int i=1; i<n; i++)
        {
            if (a[i] == a[0])
            {
                count1++;
            }
            else
            {
                if (a[i] != a[i-1])
                {
                    distinct++;
                }
                count2++;
            }
        }


        if(distinct > 2)  
        {
            cout << "No" << endl;
        }
        else if(count2> 0)
        {
            if(abs(count1-count2) > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}