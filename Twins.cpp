#include <bits/stdc++.h>
using namespace std;


int sumofarrayIndex(int arr[], int size, int start_index)
{
    int sum=0;
    for (int i = start_index; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n; cin >> n;

    int value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }

    sort(value, value + n);
    reverse(value, value+n);

    for (int i = 1; i <= n; i++)
    {
        if ( sumofarrayIndex(value, i, 0) > sumofarrayIndex(value, n, i) )
        {
            cout << i;
            return 0;
        } 
    }
    
    return 0;
}