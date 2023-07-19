#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int bit = log2(n) + 1;
    cout << (~n & ((1 << (bit)) - 1));
}

/*
    001010
    110101
    010000
    001111
    010000
    101
*/