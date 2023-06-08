// 281A. Word Capitalization
// https://codeforces.com/problemset/problem/281/A

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
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s << endl;
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