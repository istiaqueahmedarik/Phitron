/*******************************************
 @b |I|s|t|i|a|q|u|e| |A|h|m|e|d| |A|r|i|k|
********************************************/
#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
void __print(int x)
{
    cerr << x;
}
#define int long long
#define pi acos(-1)
#define endl '\n'
#define set_bits __builtin_popcountll
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define FileIO                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)
///@b decltype and const
const int MOD = 1e9 + 7, dx[] = {1, 0, -1, 0, 1, -1, -1, 1}, dy[] = {0, 1, 0, -1, 1, 1, -1, -1};
///@b debug
struct _
{
    ios_base::Init i;
    _()
    {
        cin.sync_with_stdio(0);
        cin.tie(0);
        cout << fixed << setprecision(10);
    }
} ___;
void __print(long x)
{
    cerr << x;
}
void __print(long long x)
{
    cerr << x;
}
void __print(unsigned x)
{
    cerr << x;
}
void __print(unsigned long x)
{
    cerr << x;
}
void __print(unsigned long long x)
{
    cerr << x;
}
void __print(float x)
{
    cerr << x;
}
void __print(double x)
{
    cerr << x;
}
void __print(long double x)
{
    cerr << x;
}
void __print(char x)
{
    cerr << '\'' << x << '\'';
}
void __print(const char *x)
{
    cerr << '\"' << x << '\"';
}
void __print(const string &x)
{
    cerr << '\"' << x << '\"';
}
void __print(bool x)
{
    cerr << (x ? "true" : "false");
}

template <typename T, typename V>
void __print(const pair<T, V> &x)
{
    cerr << '{';
    __print(x.first);
    cerr << ',';
    __print(x.second);
    cerr << '}';
}
template <typename T>
void __print(const T &x)
{
    int f = 0;
    cerr << '{';
    for (auto &i : x)
        cerr << (f++ ? "," : ""), __print(i);
    cerr << "}";
}
void _print()
{
    cerr << "]\n";
}
template <typename T, typename... V>
void _print(T t, V... v)
{
    __print(t);
    if (sizeof...(v))
        cerr << ", ";
    _print(v...);
}
#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

///@b PBDS
// template <typename T>
// using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using o_set_g = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using o_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// template <typename T>
// using o_multiset_g = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class T>
class SegmentTree
{
    vector<T> arr, tree, lazy;

public:
    SegmentTree(vector<T> &arr)
    {
        this->arr.resize(arr.size());
        this->arr = arr;
        tree.resize(4 * arr.size());
        lazy.resize(4 * arr.size());
    }
    void build(int node, int start, int end)
    {
        if (start == end)
        {
            tree[node] = arr[start];
            return;
        }
        build(node << 1, start, (start + end) >> 1);
        build((node << 1) + 1, ((start + end) >> 1) + 1, end);
        tree[node] = tree[node << 1] + tree[(node << 1) + 1];
    }
    void update(int node, int start, int end, int idx, T val)
    {
        if (start == end)
        {
            arr[idx] = tree[node] = val;
            return;
        }
        if (idx <= (start + end) >> 1)
            update(node << 1, start, (start + end) >> 1, idx, val);
        else
            update((node << 1) + 1, ((start + end) >> 1) + 1, end, idx, val);
        tree[node] = tree[node << 1] + tree[(node << 1) + 1];
    }
    void update(int node, int start, int end, int left, int right, T add)
    {
        if (left > end || right < start)
            return;
        if (start >= left && end <= right)
        {
            tree[node] += (end - start + 1) * add;
            lazy[node] += add;
            return;
        }
        update(node << 1, start, (start + end) >> 1, left, right, add);
        update((node << 1) + 1, ((start + end) >> 1) + 1, end, left, right, add);
        tree[node] = tree[node << 1] + tree[(node << 1) + 1] + (end - start + 1) * lazy[node];
    }
   
    T query(int node, int start, int end, int l, int r, int carry = 0)
    {
        if (r < start || end < l)
            return 0;
        return (l <= start && end <= r) ? tree[node]+carry*(end-start+1) : query(node << 1, start, (start + end) >> 1, l, r,carry+lazy[node]) + query((node << 1) + 1, ((start + end) >> 1) + 1, end, l, r,carry+lazy[node]);
    }
};

inline void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    SegmentTree<int> st(arr);
    st.build(1, 1, n);
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int l, r, y;
            cin >> l >> r >> y;
            st.update(1, 1, n, l, r, y);
        }
        else
        {
            int y;
            cin >> y;
            cout << st.query(1, 1, n, y, y) << endl;
        }
    }
}

auto main() -> int32_t
{
    IOS;
    int t = 1, cs = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
