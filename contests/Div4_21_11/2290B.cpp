#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, count = 0;
    cin >> a;
    vector<char> s(a);
    for (int i = 0; i < a; i++)
    {
        cin >> s[i];
    }
    if (s[0] == 'B')
    {
        count++;
    }
    for (int i = 1; i < a; i++)
    {
        if (s[i] != s[i - 1])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    cout << count << "\n";
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