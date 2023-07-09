
#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int dfs(map<pair<int, int>, int> &mp, vector<vector<int>> &adj, int par, int i)
{
    int temp = 0;
    for (int j : adj[i])
    {
        if (j == par)
            continue;
        int temp1 = 0;
        if (mp[{i, j}] < mp[{par, i}])
            temp1++;
        temp = max(temp, temp1 + dfs(mp, adj, i, j));
    }
    return temp;
}
int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);

        map<pair<int, int>, int> mp;
        for (int i = 0; i < n - 1; i++)
        {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
            mp[{a, b}] = mp[{b, a}] = i;
        }
        int ans = LLONG_MIN;
        for (auto i : adj[0])
        {
            ans = max(ans, dfs(mp, adj, 0, i));
        }
        cout << ans + 1 << endl;
    }
    return 0;
}