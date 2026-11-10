#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c = 0;
    cin >> a >> b;
    vector<int> v(a);
    for (int i = 0; i < a; i++)
    {
        cin >> v[i];
        if (v[i] > 0 && v[i] >= v[b - 1])
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