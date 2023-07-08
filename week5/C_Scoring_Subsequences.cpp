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
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int ans[n];

        for (int i = 1; i <= n; i++)
        {
            int low = 1, high = i;
            int k = 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                int temp = arr[mid] / (i - mid + 1);
                if (temp)
                {
                    k = mid;
                    high = mid - 1;
                }
                else
                {
                    low = mid + 1;
                }
            }

            ans[i - 1] = i - k + 1;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}