#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int check(vector<int> a)
{
    int n = a.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ a[i];
    }
    return ans;
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
        vector<int> a(n);
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        for (int i = 0; i < 257; i++)
        {
            vector<int> temp(n);
            for (int j = 0; j < n; j++)
            {
                temp[j] = a[j] ^ i;
            }
            if (check(temp) == 0)
            {
                flag = 0;
                ans = i;
                break;
                i = 259;
            }
        }
        if (flag)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}