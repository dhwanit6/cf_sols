#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a;
    cin >> a;
    vector<int> v(a - 1);
    for (int i = 0; i < (a - 1); i++)
    {
        cin >> v[i];
    }
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << -sum << "\n";
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