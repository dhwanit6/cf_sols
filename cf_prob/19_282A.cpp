#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a;
    string s;
    cin >> a;
    int b = 0;
    for (int i = 1; i <= a; i++)
    {
        cin >> s;
        if (s == "X++" || s == "++X")
        {
            b++;
        }
        else
        {
            b--;
        }
    }
    cout << b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}