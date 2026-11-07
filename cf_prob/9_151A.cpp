#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c, d, e, f, g, h;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    int drink = ((b * c) / (a * g));
    int salt = (f / (a * h));
    int lime = ((d * e) / a);
    cout << min({drink, lime, salt});
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}