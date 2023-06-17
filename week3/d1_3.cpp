#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int longestKSubstr(string s, int k)
{
    int i = 0, j = 0;
    map<char, int> mp;
    int unique = 0;
    int ans = -1;
    while (j < s.length())
    {
        mp[s[j]]++;
        if (mp[s[j]] == 1)
            unique++;
        if (unique == k)
            ans = max(ans, j - i + 1);
        if (unique > k)
        {
            while (unique > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    unique--;
                i++;
            }
        }
        j++;
    }
    return ans;
}
int32_t main()
{
    IOS;
    string s;
    int n;
    cin >> s >> n;
    cout << longestKSubstr(s, n);
    return 0;
}