#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = n / 3;
        int a = (n - 3 * ans) / 2;
        int b = (n - 3 * ans) % 2;
        int c = ans + a;
        int d = ans + b;
        cout << d << " " << c << endl;
    }
    return 0;
}