#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int count = 1;
    string s;
    cin >> s;
    int m = s.size();
    for (int i = 0; i < m - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
            if (count >= 7)
            {
                cout << "YES" << "\n";
                break;
            }
        }
        else
        {
            count = 1;
        }
    }
    if (count < 7)
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}