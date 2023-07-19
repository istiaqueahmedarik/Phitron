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
        set<int> s;
        while (n--)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        int ans = *s.rbegin();
        s.erase(ans);
        ans += *s.rbegin();
        cout << ans << endl;
    }
    return 0;
}