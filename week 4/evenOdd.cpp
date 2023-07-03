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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int alice = 0, bob = 0;
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (arr[i] % 2 == 0)
                {
                    alice += arr[i];
                }
            }
            else
            {
                if (arr[i] % 2)
                {
                    bob += arr[i];
                }
            }
        }
        if (alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if (bob > alice)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}