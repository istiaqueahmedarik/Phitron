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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> diff;
        for (int i = 0; i < n - 1; i++)
        {
            diff.push_back(abs(arr[i + 1] - arr[i]));
        }
        int ans = min(diff[0], diff[n - 2]);
        for (int i = 1; i < n - 2; i++)
        {
            ans = min(ans, max(diff[i - 1], diff[i]));
        }

        cout << ans << endl;
    }
    return 0;
}