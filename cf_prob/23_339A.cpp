#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<char> v;
    for (int i = 0; i <= n; i += 2)
    {
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    int m = v.size();
    for (int i = 0; i < m; i++)
    {
        cout << v[i];
        if (i < m - 1)
        {
            cout << '+';
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}