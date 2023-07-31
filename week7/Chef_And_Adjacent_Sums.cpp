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
    vector<int> arr(n);
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ump[arr[i]]++;
    }
    sort(arr.begin(), arr.end());
    if (arr.back() == arr[n - 2])
    {
        if (n - ump[arr.back()] >= ump[arr.back()] - 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
    {
        if (ump[arr[n - 2]] == n - 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
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