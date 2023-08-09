#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int n, m;
map<int, vector<int>> adj;
int c = 0;
map<int, int> catCount;
void dfs(int node, int parent, int visited[])
{
    if (adj[node].size() == 1 && node != 1)
        c++;

    for (auto i : adj[node])
    {
        if (i != parent)
        {
            catCount[i] = (visited[i] ? catCount[node] + 1 : 0);
            if (catCount[i] <= m)
                dfs(i, node, visited);
        }
    }
}
int32_t main()
{
    IOS;
    cin >> n >> m;
    int visited[n + 1];
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        visited[i] = x;
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    catCount[1] = (visited[1] ? 1 : 0);
    dfs(1, 0, visited);
    cout << c << endl;
    return 0;
}