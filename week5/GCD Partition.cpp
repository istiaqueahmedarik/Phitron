#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int arr1[n];
        int mn[n];
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mn[i] = x;
        }
        arr[0] = mn[0];
        for (int i = 1; i < n; i++)
        {
            arr[i] = arr[i - 1] + mn[i];
        }
        arr1[n - 1] = mn[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            arr1[i] = arr1[i + 1] + mn[i];
        }

        int maX = 1;

        for (int i = 0; i < n - 1; i++)
        {
            maX = max(maX, gcd(arr[i], arr1[i + 1]));
        }
        cout << maX << "\n";
    }
}