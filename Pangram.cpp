#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    set<char> st;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for(char c : s)
    {
        st.insert(c);
    }

    if(st.size() == 26)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}