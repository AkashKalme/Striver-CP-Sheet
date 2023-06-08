// 546A. Soldier and Bananas
// https://codeforces.com/problemset/problem/546/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Your code goes here;
    int k, n, w;
    cin >> k >> n >> w;
    cout << max((k * ((w * (w + 1)) / 2) - n), 0) << endl;
    return 0;
}