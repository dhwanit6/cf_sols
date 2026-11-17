#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int count = 1;
    string s;
    cin >> s;
    int m = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}