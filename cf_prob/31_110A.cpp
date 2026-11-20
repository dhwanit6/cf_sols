#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int count = 0;
    string s;
    cin >> s;
    long long m = s.size();
    for (int i = 0; i < m; i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}