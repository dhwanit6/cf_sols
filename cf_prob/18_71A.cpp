#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    if (s.size() < 11)
    {
        cout << s << "\n";
    }
    else
    {
        char a = s.front();
        char b = s.back();
        cout << a << s.size() - 2 << b << "\n";
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