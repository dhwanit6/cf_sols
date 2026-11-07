#include <iostream>
using namespace std;
void solve()
{
    long long a;
    cin >> a;
    if (a < 5)
    {
        cout << 1;
    }
    else if (a % 5 == 0)
    {
        cout << a / 5;
    }
    else
    {
        cout << (a / 5) + 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}