#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    if ((a + b) % 2 == 1)
    {
        cout << -1;
    }
    else if (a == b)
    {
        cout << 0;
    }
    else
    {
        int x = abs(a - b);
        cout << ceil(((x / 2.0) / k));
    }
}