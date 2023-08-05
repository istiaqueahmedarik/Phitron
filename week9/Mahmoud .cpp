#include <bits/stdc++.h>
#define int long long
#define float double
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int longest_uncommon_subsequence(string s1, string s2)
{
    if (s1 == s2)
        return -1;
    return max(s1.size(), s2.size());
}
int32_t main()
{
    IOS;
    string s1, s2;
    cin >> s1 >> s2;
    cout << longest_uncommon_subsequence(s1, s2) << endl;
    return 0;
}