// 791A. Bear and Big Brother
// https://codeforces.com/problemset/problem/791/A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Your code goes here;
    int l, b;
    cin >> l >> b;
    int i = 0;
    while (l <= b)
    {
        l *= 3;
        b *= 2;
        i++;
    }
    cout << i << endl;
    return 0;
}