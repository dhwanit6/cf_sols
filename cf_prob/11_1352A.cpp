#include <bits\stdc++.h>
using namespace std;
void solve()
{
    int a, count = 0, i = 1, n = 0, v = 0, g = 0, j = 0, k = 1, l = 0;
    cin >> a;
    int b = a;
    l = a;
    while (a != 0)
    {
        count++;
        a /= 10;
    }
    n = count;
    g = count;
    while (count != 0)
    {
        v = (b % 10) * i;
        b /= 10;
        i = i * 10;
        if (v == 0)
        {
            n--;
        }
        v = 0;
        count--;
    }
    cout << n << "\n";
    while (g != 0)
    {
        j = (l % 10) * k;
        l /= 10;
        k = k * 10;
        if (j == 0)
        {
            g--;
            continue;
        }
        else
        {
            cout << j << " " << "\n";
        }
        g--;
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
