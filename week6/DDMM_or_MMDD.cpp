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
        cin >> s;
        int first = s[0] - 48, sec = s[1] - 48, third = s[3] - 48, frth = s[4] - 48, ans = 10 * first + sec, ans1 = 10 * third + frth;
        if (ans > 12)
            cout << "DD/MM/YYYY" << endl;
        else if (ans1 > 12)
            cout << "MM/DD/YYYY" << endl;
        else
            cout << "BOTH" << endl;
    }
    return 0;
}