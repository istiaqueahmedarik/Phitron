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
        string s1, s2;
        cin >> s1 >> s2;
        int pos = s2.size() - 1;
        int mPos = s1.size() - 1;
        bool flag = true;

        vector<string> ans;
        for (int i = mPos; i >= 0; i--)
        {
            if ((s1[i] - '0') < (s2[s2.size() - 1] - '0'))
            {
                int bigNo = s2[s2.size() - 1] - '0', small = s1[i] - '0';
                if (bigNo - small > 10)
                {

                    flag = false;
                    i = -1;
                    break;
                }
                string ps = to_string(bigNo - small);
                ans.push_back(ps);
                if (s2.empty())
                {

                    flag = false;
                    i = -1;
                    break;
                }
                s2.pop_back();
            }
            else
            {
                string temp;
                if (s2.empty())
                {

                    flag = false;
                    i = -1;
                    break;
                }
                temp.push_back(s2.back());
                s2.pop_back();
                while (s1[i] - '0' >= stoll(temp))
                {
                    if (s2.empty())
                    {
                        cout << "flag" << endl;
                        flag = false;
                        i = -1;
                        break;
                    }
                    temp.push_back(s2.back());
                    s2.pop_back();
                    reverse(temp.begin(), temp.end());
                }
                if (stoll(temp) - (s1[i] - '0') > 10)
                {
                    flag = false;
                    i = -1;
                    break;
                }
                string diff = to_string(stoll(temp) - (s1[i] - '0'));
                ans.push_back(diff);
            }
        }
        if (flag)
        {
            reverse(ans.begin(), ans.end());
            for (auto i : ans)
            {
                cout << i;
            }
            cout << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
/*
    1 2 3 4 5
    9  0  0  0  7
    108
    0 1 4
*/