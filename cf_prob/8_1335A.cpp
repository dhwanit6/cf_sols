#include <iostream>
using namespace std;
void solve()
{
    int a;
    cin >> a;
    if (a < 3)
    {
        cout << 0 << "\n";
    }
    else if (a % 2 == 0)
    {
        cout << (a / 2) - 1 << "\n";
    }
    else
    {
        cout << a / 2 << "\n";
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