#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    vector<int> s = v;
    sort(v.begin(), v.end());
    if (v != s)
    {
        cout << 0 << "\n";
    }
    else
    {
        cout << ((v[a - 1] - v[a - 2]) / 2) + 1 << "\n";
    }
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