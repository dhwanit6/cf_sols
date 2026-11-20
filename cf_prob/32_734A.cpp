#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, c = 0, b = 0;
    cin >> a;
    string s;
    cin >> s;
    for (int i = 0; i < a; i++)
    {
        if (s[i] == 'A')
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    if (c > b)
    {
        cout << "Anton" << "\n";
    }
    else if (c == b)
    {
        cout << "Friendship" << "\n";
    }
    else
    {
        cout << "Danik" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}