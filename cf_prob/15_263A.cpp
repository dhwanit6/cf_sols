#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a = 0, b = 0;
    vector<vector<int>> mat(5, vector<int>(5));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    cout << abs(2 - a) + abs(2 - b) << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}