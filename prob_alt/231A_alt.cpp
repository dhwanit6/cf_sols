#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, x, y, z, c = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y >> z;
        if (x + y + z >= 2)
        {
            c++;
        }
    }
    cout << c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}