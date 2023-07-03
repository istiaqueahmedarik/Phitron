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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (a.empty())
            {
                a.emplace_back(temp);
            }
            else if (a.back() != temp)
            {
                a.emplace_back(temp);
            }
        }
        map<int, int> mp;
        for (int i = 0; i < a.size(); i++)
        {
            if (mp[a[i]])
                mp[a[i]]++;
            else
                mp[a[i]] += 2;
            // cout << a[i] << " ";
        }
        mp[a[0]]--;
        mp[a.back()]--;

        int mn = LLONG_MAX;

        for (auto i : mp)
        {
            mn = min(mn, i.second);
        }

        cout << mn << endl;
    }
    return 0;
}