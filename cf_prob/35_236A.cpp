#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string a;
    cin >> a;
    set<char> s(a.begin(), a.end());
    int m = s.size();
    if (m % 2 == 0)
    {
        cout << "CHAT WITH HER!" << "\n";
    }
    else
    {
        cout << "IGNORE HIM!" << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}