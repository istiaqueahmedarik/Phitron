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
    int n, k, x, y;
    cin >> x >> y >> n;
    k = 1;
    int day = min(k, n);
    int ans = day * x + max(0LL, n - day) * y;
    cout << ans << endl;
    return 0;
}