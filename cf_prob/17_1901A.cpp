#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c = 0, y = 0;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            c = v[0];
        }
        else
        {
            c = max((v[i] - v[i - 1]), c);
        }
    }
    y = 2 * (b - v[a - 1]);
    cout << max(c, y) << "\n";
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