// A. Tram
// https://codeforces.com/problemset/problem/116/A

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
    int A[n], B[n];
    int max = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp -= A[i];
        temp += B[i];
        if (max < temp)
            max = temp;
    }
    cout << max << endl;
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