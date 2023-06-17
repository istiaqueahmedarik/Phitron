#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int lenOfLongSubarr(int A[], int N, int K)
{
    long long s = 0;
    map<long long, int> mp;
    int mx = 0;
    for (int i = 0; i < N; i++)
    {
        s += A[i];
        if (s == K)
            mx = max(mx, i + 1);
        if (mp.find(s - K) != mp.end())
        {
            mx = max(mx, i - mp[s - K]);
        }
        if (mp.find(s) == mp.end())
            mp[s] = i;
    }
    return mx;
}
int32_t main()
{
    IOS;
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << lenOfLongSubarr(arr, n, k);
    return 0;
}