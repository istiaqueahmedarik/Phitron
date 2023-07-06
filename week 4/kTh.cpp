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
        string s;
        int first = 1;
        while (k > first)
        {
            k -= first;
            first++;
        }
        for (int i = 0; i < n; i++)
        {
            if (i == n - first - 1 || i == n - k)
            {
                s += 'b';
            }
            else
            {
                s += 'a';
            }
        }
        cout << s << endl;
    }
    return 0;
}