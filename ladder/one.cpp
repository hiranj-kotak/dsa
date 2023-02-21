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
        int arr[2 * n];
        int cnt = 0;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                cnt++;
        }
        if (cnt == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}