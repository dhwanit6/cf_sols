#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b, c, d;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower(a[i]);
    }
    cin >> b;
    for (int i = 0; i < b.size(); i++)
    {
        b[i] = tolower(b[i]);
    }
    if (a < b)
    {
        cout << -1 << "\n";
    }
    else if (a > b)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}