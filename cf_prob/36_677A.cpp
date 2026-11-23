#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, count = 0;
    cin >> a >> b;
    vector<int> c(a);
    for (int i = 0; i < c.size(); i++)
    {
        cin >> c[i];
        if (c[i] > b)
        {
            count++;
        }
    }
    cout << a + count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}