// A. Divisibility Problem
// https://codeforces.com/problemset/problem/1328/A

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
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
        cout << "0" << endl;
    else
        cout << b - (a % b) << endl;
}

int32_t main()
{
    // your code goes here
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}