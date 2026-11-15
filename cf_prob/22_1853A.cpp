#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, m = INT_MAX;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < a - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            cout << 0 << "\n";
            return;
        }
        m = min((v[i + 1] - v[i]), m);
    }
    cout << (m / 2) + 1 << "\n";
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