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
    int n;
    cin >> n;
    int c = __builtin_popcount(n);
    cout << pow(2, c) - 1 << endl;
    return 0;
}