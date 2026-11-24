#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b = 0;
    cin >> a;
    cin.ignore();
    string s;
    getline(cin, s);
    b = s.size();
    for (int i = 0; i < b; i++)
    {
        if (s[i] == '1')
        {
            cout << "HARD" << "\n";
            return;
        }
    }
    cout << "EASY" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}