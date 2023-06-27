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
        string s, p;
        cin >> s >> p;
        map<char, int> mp;
        for (auto i : s)
        {
            mp[i]++;
        }
        set<char> st;
        for (auto i : p)
        {
            st.insert(i);
            mp[i]--;
        }
        int test = 0;
        int temp[2];
        for (auto i : st)
        {
            if (test > 2)
                break;
            temp[test] = mp[i];
            test++;
        }
        bool f = false;
        if (temp[0] > temp[1])
            f = true;

        char first = p[0];
        for (auto i : mp)
        {
            if (i.first == first && f)
            {
                cout << p;
            }
            while (i.second--)
                cout << i.first;
            if (i.first == first && !f)
            {
                cout << p;
            }
        }
        cout << endl;
    }
    return 0;
}