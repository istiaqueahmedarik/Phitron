#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
map<string, int> mp;
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
        int c = n - 1;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1])
            {
                c--;
            }
        }
        cout << c << endl;
    }
    return 0;
}