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
        int n;
        cin >> n;
        int ans = 0;
        while (n != 50)
        {
            if (n <= 50)
                n += 2, ans++;
            else
                n -= 3, ans++;
        }
        cout << ans << endl;
    }
    return 0;
}