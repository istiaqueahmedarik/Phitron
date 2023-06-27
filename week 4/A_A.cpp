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
    int t, arr[3];
    cin >> t >> arr[0] >> arr[1] >> arr[2];
    int i = 0;
    while (1)
    {
        t -= arr[i];
        if (t < 0)
        {
            if (i == 0)
                cout << "F" << endl;
            else if (i == 1)
                cout << "M" << endl;
            else
                cout << "T" << endl;
            break;
        }
        i++;
        i = i % 3;
    }

    return 0;
}