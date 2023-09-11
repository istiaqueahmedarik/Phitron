#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

using namespace std;
int sieve[10000001] = {0};
void sieveOfEratosthenes(int n)
{
    sieve[0] = 1;
    sieve[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = 1;
            }
        }
    }
}
int32_t main()
{
    IOS;
    sieveOfEratosthenes(10000001);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = sqrt(n);
        if (x * x == n && sieve[x] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}