#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b = 1000000;
    cin >> a;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        b = min(b, abs(v[i]));
    }
    cout << b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}