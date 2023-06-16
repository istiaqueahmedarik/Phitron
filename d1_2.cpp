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
    int pref[N];
    map<int, int> mp;
    for (int i = 0; i < N; i++)
    {
        if (i)
            pref[i] = pref[i - 1] + A[i];
        else
            pref[i] = A[i];
        mp[pref[i]] = i;
    }
    int i = 0, j = 0;
    int mx = -1;
    while (j < N)
    {
        cout << pref[j] << " " << mp[K - pref[j]] << endl;
        if (mp[pref[j] - K])
            mx = max(j - mp[pref[j] - K], mx);
        j++;
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