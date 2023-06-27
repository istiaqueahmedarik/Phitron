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
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    for (auto i : s)
    {
        if (i == 'a')
        {
            c++;
            a++;
        }
        else
            b++;
        a = max(a, b);
        b = max(b, c);
    }
    cout << a << endl;
    return 0;
}