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
        string s;
        cin >> s;
        string s1, s2;
        s1 += '0';
        for (int i = s.length() - 1; i >= 0; i--)
        {
            s1 += to_string((s[i] - '0') ^ s1.back() - '0');
        }
        reverse(s1.begin(), s1.end());
        s1.pop_back();
        s2 += '1';
        for (int i = s.length() - 1; i >= 0; i--)
        {
            s2 += to_string((s[i] - '0') ^ s2.back() - '0');
        }
        reverse(s2.begin(), s2.end());
        int c1 = 0, c2 = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            if (s1[i] == '1')
                c1++;
            if (s2[i] == '1')
                c2++;
        }
        cout << max(c1, c2) << endl;
    }
    return 0;
}