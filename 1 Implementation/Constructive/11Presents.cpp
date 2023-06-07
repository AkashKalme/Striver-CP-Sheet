// 136A. Presents
// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h>

#define int long long int
#define pb push_back
#define si set<int>
#define vi vector<int>
#define pii pair<int, int>
#define vpi vector<pii>
#define mii map<int, int>
#define all(p) p.begin(), p.end()
#define print(a)          \
    for (auto x : a)      \
        cout << x << " "; \
    cout << endl;

using namespace std;

void solve()
{
    int n, b;
    cin >> n;
    int res[105];
    for (int i = 1; i <= n; i++)
    {
        cin >> b;
        res[b] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << res[i] << " ";
    }
}

int32_t main()
{
    // your code goes here
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}