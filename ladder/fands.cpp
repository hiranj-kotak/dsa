#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a = max(x ^ y, x | y);
        int b = min(x ^ y, x | y);
        // cout << a << " " << b << endl;
        int c = a ^ b;
        int d = a | b;
        // cout << c << endl;
        if (c == x && d == y)
            cout << a << " " << b << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}