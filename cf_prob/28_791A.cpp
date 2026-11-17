#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, count = 0;
    cin >> a >> b;
    while (a < (b + 1))
    {
        count++;
        a = 3 * a;
        b = 2 * b;
    }
    cout << count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}