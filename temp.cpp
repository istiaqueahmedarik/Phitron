//!-----------------------------------------------------!//
//!                  YUSUF REZA HASNAT                  !//
//!-----------------------------------------------------!//

#include <bits/stdc++.h>
using namespace std;
// #include "debug.h"
#define int long long
#define float long double
#define pb push_back
#define vf(v) (v).begin(), (v).end()
#define vr(v) (v).rbegin(), (v).rend()
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define endl "\n"
#define YUSUF ios_base::sync_with_stdio(false),
#define REZA cin.tie(NULL),
#define HASNAT cout.tie(NULL)

int mod = 1000000007;
float pi = 3.141592653589793238462643383279502884197;
int inf = 1e18;

using namespace std;

void solve()
{
    string s, p;
    cin >> s >> p;
    string ans;
    map<char, int> mp;
    for (auto it : p)
        mp[it]++;
    sort(vf(s));
    // cout << s << endl;
    for (auto it : s)
    {
        if (mp[it] == 0)
            ans += it;
        else
            mp[it]--;
    }
    // cout << ans << endl;
    string final;
    bool f = true;
    for (auto it : ans)
    {
        if (it > p[0] and f)
            final += p, f = false;
        final += it;
    }
    if (f)
        final += p;
    // debug(mp);
    cout << final << endl;
}

int32_t main()
{
    YUSUF REZA HASNAT;
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
        solve();
    string first = "aakkaamnnry";
    string sec = "aakkaamnnry";
    bool test = first < sec;
    cout << test << endl;
    return 0;
}