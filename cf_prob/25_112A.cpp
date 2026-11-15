#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    int c, d;
    cin >> a;
    c = a.size();
    for (int i = 0; i < c; i++)
    {
        a[i] = tolower(a[i]);
    }
    cin >> b;
    d = b.size();
    for (int i = 0; i < d; i++)
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