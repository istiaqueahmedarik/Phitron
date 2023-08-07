#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
map<int, vector<int>> adj;
map<int, bool> visited;
int c[2];
void dfs(int node, int parent, int color)
{
    c[color]++;
    for (auto i : adj[node])
    {
        if (i != parent)
            dfs(i, node, color ^ 1);
    }
}
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int p = n;
    n--;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, 0, 0);
    int possibility = c[0] * c[1];
    int ans = possibility - p;
    cout << ans + 1 << endl;
    return 0;
}