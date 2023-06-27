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
        vector<int> arr(n + 1);
        unordered_map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            mp[arr[i]] = i;
        }
        vector<int> ans(n + 1);
        for (int i = n; i > 0; i--)
        {
            ans[i] = mp[i] % i;
            for (int j = 1; j < i; j++)
            {
                mp[j] = (mp[j] - ans[i] + i) % i;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}