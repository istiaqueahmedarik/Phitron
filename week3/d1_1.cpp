#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> &a, long long k)
{
    int ans = 0;
    int i = 0, j = 0;
    long long sm = 0;
    while (j < a.size())
    {
        sm += a[j];
        if (sm > k)
        {
            while (sm > k)
            {
                // cout << sm << endl;
                sm -= a[i++];
            }
        }
        if (sm == k)
        {
            ans = max(j - i + 1, ans);
        }
        j++;
        // cout << i << " " << j << " " << sm << endl;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    int k;
    cin >> k;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << longestSubarrayWithSumK(a, k);
}