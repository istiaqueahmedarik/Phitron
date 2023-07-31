#include <bits/stdc++.h>
using namespace std;
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
// decltype
const float pi = 3.141592653589793238462643383279502884197;
const int MOD = 1e9 + 7, dx[] = {1, 0, -1, 0, 1, -1, -1, 1}, dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 0;
    string ans;
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            c++;
        else
        {
            if (c & 1)
                ans += string(2, s[i]);
            else
                ans.push_back(s[i]);
            c = 0;
        }
    }
    if (c & 1)
        ans += string(2, s.back());
    else
        ans.push_back(s.back());
    cout << ans << endl;
}
auto main() -> int32_t
{
    IOS;
    int t, cs = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}