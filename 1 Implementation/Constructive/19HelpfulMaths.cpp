// 339A. Helpful Maths
// https://codeforces.com/problemset/problem/339/A

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
    vi v;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1' || s[i] == '2' || s[i] == '3')
        {
            v.pb(s[i] - '0');
            count++;
        }
    }
    sort(all(v));
    int i = 0;
    while (i < count)
    {
        cout << v[i];
        if (i == count - 1)
        {
            break;
        }
        cout << "+";
        i++;
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