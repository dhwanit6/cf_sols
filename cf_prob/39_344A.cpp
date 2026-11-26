#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c = 0, d = -1;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b == d)
        {
            continue;
        }
        else
        {
            c++;
        }
        d = b;
    }
    cout << c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}