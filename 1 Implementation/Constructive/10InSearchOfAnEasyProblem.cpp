// 1030A. In Search of an Easy Problem
// https://codeforces.com/problemset/problem/1030/A

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
    int A[n];
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] == 1)
        {
            flag = 1;
        }
    }
    if (!flag)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
}

int32_t main()
{
    // your code goes here
    int t = 1;
    // 	cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}