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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    vector<int> ans(n);
    int j = 0;
    for (int i = 1; i < n; i += 2)
    {
        ans[i] = v[j];
        j++;
    }
    for (int i = 0; i < n; i += 2)
    {
        ans[i] = v[j];
        j++;
    }
    int c = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (ans[i] < ans[i - 1] && ans[i] < ans[i + 1])
            c++;
    }
    cout << c << endl;
    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}