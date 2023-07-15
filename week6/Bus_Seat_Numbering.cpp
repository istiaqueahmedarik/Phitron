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
        if (n >= 1 && n <= 10)
            cout << "Lower Double" << endl;
        else if (n >= 11 && n <= 15)
            cout << "Lower Single" << endl;
        else if (n >= 16 && n <= 25)
            cout << "Upper Double" << endl;
        else
            cout << "Upper Single" << endl;
    }
    return 0;
}