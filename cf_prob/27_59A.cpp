#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int count = 0;
    cin >> s;
    int a = s.size();
    for (int i = 0; i < a; i++)
    {
        if (isupper(s[i]))
        {
            count++;
        }
    }
    if (count > (a / 2))
    {
        for (int i = 0; i < a; i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s;
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}