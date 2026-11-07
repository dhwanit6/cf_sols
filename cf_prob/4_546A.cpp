#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    /**/
    cin >> a >> b >> c;
    long long sum = a * c * (c + 1) / 2;
    if (sum - b > 0)
    {
        cout << sum - b;
    }
    else
    {
        cout << 0;
    }
}