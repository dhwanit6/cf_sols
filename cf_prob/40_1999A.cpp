#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, sum = 0;
    cin >> a;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}