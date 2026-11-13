#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, count = 0;
    cin >> a;
    vector<char> s(a);
    for (int z = 0; z < a; z++)
    {
        cin >> s[z];
    }
    int parity = (a - 1) % 2;

    for (int i = a - 1; i >= 0; i--)
    {
        if (s[a - 1] == 'R')
        {
            if (i % 2 == parity)
            {
                if (s[i] != 'R')
                {
                    count++;
                }
            }
            else
            {
                if (s[i] != 'B')
                {
                    count++;
                }
            }
        }
        else if (s[a - 1] == 'B')
        {
            if (i % 2 == parity)
            {
                if (s[i] != 'B')
                {
                    count++;
                }
            }
            else
            {
                if (s[i] != 'R')
                {
                    count++;
                }
            }
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