#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        if (a % 10 == 0)
        {
            a /= 10;
        }
        else
        {
            a -= 1;
        }
    }
    cout << a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}