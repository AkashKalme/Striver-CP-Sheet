// 236A. Boy or Girl
// https://codeforces.com/problemset/problem/236/A

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
    set<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        st.insert(s[i]);
    }
    if (st.size() % 2 == 1)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;
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