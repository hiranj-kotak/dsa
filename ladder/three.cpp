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
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum < 0)
            cout << 1 << endl;
        else if (sum >= n)
            cout << sum - n << endl;
        else
            cout << n - sum + 1 << endl;
    }
    return 0;
}