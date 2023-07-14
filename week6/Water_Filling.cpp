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
        int a, b, c;
        cin >> a >> b >> c;
        int x = 0;
        if (a)
            x++;
        if (b)
            x++;
        if (c)
            x++;
        if (x >= 2)
            cout << "Not now" << endl;
        else
            cout << "Water filling time" << endl;
    }
    return 0;
}