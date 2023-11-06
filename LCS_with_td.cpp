#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];
string s, t;
int lcs(int i, int j)
{
    if (i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    if (s[i] == t[j])
        return dp[i][j] = 1 + lcs(i - 1, j - 1);
    return dp[i][j] = max(lcs(i - 1, j), lcs(i, j - 1));
}

int main()
{
    memset(dp, -1, sizeof(dp));
    cin >> s >> t;
    cout << lcs(s.size() - 1, t.size() - 1) << endl;
}