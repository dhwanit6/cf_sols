#include <iostream>
#include <cmath>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int diff = abs(a - b);
    if (diff == 0)
    {
        cout << 0 << "\n";
    }
    else if (diff <= 10)
    {
        cout << 1 << "\n";
    }
    else if (diff % 10 == 0)
    {
        cout << diff / 10 << "\n";
    }
    else
    {
        cout << (diff / 10) + 1 << "\n";
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