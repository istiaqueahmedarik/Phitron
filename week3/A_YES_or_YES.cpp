#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        for (int i = 0; i < 3; i++)
        {
            char x;
            cin >> x;
            s += x | 32;
        }
        {
            s == "yes" ? cout << "YES\n" : cout << "NO\n";
        }
    }
    return 0;
}