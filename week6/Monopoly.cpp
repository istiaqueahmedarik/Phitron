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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int total = a + b + c + d;
        int mx = max({a, b, c, d});
        if (2 * mx > total)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}