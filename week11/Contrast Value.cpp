#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
bool isTrough(vector<int> &arr, int n, int num, int i, int j)
{
    if (i >= 0 && arr[i] < num)
        return false;

    if (j < n && arr[j] < num)
        return false;
    return true;
}
bool isPeak(vector<int> &arr, int n, int num, int i, int j)
{
    if (i >= 0 && arr[i] > num)
        return false;

    if (j < n && arr[j] > num)
        return false;
    return true;
}

int32_t main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        map<int, bool> mp;
        int x;
        cin >> x;
        arr.push_back(x);
        for (int i = 1; i < n; i++)
        {
            int x;
            cin >> x;
            if (arr.back() != x)
                arr.push_back(x);
        }
        n = arr.size();
        int c = min(n, 2LL);
        for (int i = 1; i < n - 1; i++)
        {
            c += (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) || (arr[i - 1] > arr[i] && arr[i] < arr[i + 1]) ? 1 : 0;
        }
        cout << c << endl;
    }
    return 0;
}

/*
    array dea ase arr[n]
    contrast = shobgula adjacent element er abs diff er sum
    min length of subsequence jetar contrast same;
*/