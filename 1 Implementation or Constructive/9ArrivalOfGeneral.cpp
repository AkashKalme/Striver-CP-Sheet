// 144A.Arrival of the General
// https://codeforces.com/problemset/problem/144/A

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
    int n;
    cin >> n;
    int a[n];
    int min = INT_MAX;
    int max = 0;
    int mini = INT_MAX;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= min)
        {
            min = a[i];
            mini = i + 1;
        }
        if (a[i] > max)
        {
            max = a[i];
            maxi = i + 1;
        }
    }
    if (mini < maxi)
        cout << (maxi - 1) + (n - mini) - 1 << endl;
    else
        cout << (maxi - 1) + (n - mini) << endl;
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