#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c, d = 0;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> a >> b;
        if (b - a > 1)
        {
            d++;
        }
    }
    cout << d << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}