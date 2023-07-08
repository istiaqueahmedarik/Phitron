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
        int m, n;
        cin >> n >> m;
        int size = (2 * n - 2 * m);
        cout << size << endl;
        vector<int> v;
        for (int i = m + 1; i <= n; i++)
            v.push_back(i);
        for (int i = n - 1; i >= m; i--)
            v.push_back(i);
        for (int i = 0; i < size; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}