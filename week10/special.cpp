#include <bits/stdc++.h>
#define int long long
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
        int n, k;
        cin >> n >> k;
        int ans = 0, c = 1;
        while (k)
        {
            ans = (ans + (k % 2) * c % 1000000007) % 1000000007;
            k /= 2;
            c = c * n % 1000000007;
        }
        cout << ans << endl;
    }
    return 0;
}