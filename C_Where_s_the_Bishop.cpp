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
        char grid[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
                cin >> grid[i][j];
        }
        int x, y;
        for (int i = 1; i < 7; i++)
        {
            for (int j = 1; j < 7; j++)
            {
                // cout << grid[i][j] << endl;
                if (grid[i][j] == '#')
                {
                    if (grid[i - 1][j - 1] == '#' && grid[i + 1][j + 1] == '#' && grid[i - 1][j + 1] == '#' && grid[i + 1][j - 1] == '#')
                    {
                        x = i + 1;
                        y = j + 1;
                        break;
                    }
                }
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}