#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a, b;
    cin >> a;
    cin >> b;
    int m = a.size();
    int n = b.size();
    for (int i = 0; i < m; i++)
    {
        if (a[i] == b[n - 1])
        {
            n--;
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    if (n == 0)
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}