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
        string s;
        cin >> s;
        bool flag = true, flag1 = false;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                if (flag)
                    ans1++;
                else
                    flag1 = false, flag = true;
            }
            else
            {
                if (flag1)
                    ans2++;
                else
                    flag = false, flag1 = true;
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}