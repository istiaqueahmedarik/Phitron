#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int s;
    cin >> s;
    unordered_map<int, int> m;
    for (int i = 1; i <= n; i++)
        m[a[i]] = i;
    for (int i = 1; i <= n; i++)
    {
        if (m[s - a[i]])
        {
            if (i != m[s - a[i]])
            {
                cout << "YES" << endl;
                return 0;
            }
            else
                m[s - a[i]] = i;
        }
    }
    cout << "NO" << endl;
}

/*
1 2 5
10

*/