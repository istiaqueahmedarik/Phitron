#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        string p = "3141592653589793238462643383279";
        int l = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if (x[i] == p[i])
                l++;
            else
                break;
        }
        cout << l << "\n";
    }
}