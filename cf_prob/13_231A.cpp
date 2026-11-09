#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, count = 0;
    cin >> a;
    vector<vector<int>> mat(a, vector<int>(3));
    for (int r = 0; r < a; r++)
    {
        int row_sum = 0;
        for (int c = 0; c < 3; c++)
        {
            cin >> mat[r][c];
            row_sum += mat[r][c];
        }
        if (row_sum >= 2)
        {
            count++;
        }
    }
    cout << count;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}