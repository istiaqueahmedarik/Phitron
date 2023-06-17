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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            for (int i = 0; i < k; i++)
            {
                char c;
                cin >> c;
                x += c;
            }
            v[i] = x;
        }
        int mn = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i] << " " << i << " " << v[j] << " " << j << endl;
                if (i != j)
                {
                    mn = min(mn, abs(v[i] - v[j]));
                }
            }
        }
        cout << mn << endl;
    }
    return 0;
}