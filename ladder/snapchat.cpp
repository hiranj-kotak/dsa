#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int cnt = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 || b[i] == 0)
            {
                mx = max(cnt, mx);
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        mx = max(cnt, mx);
        cout << mx << endl;
    }
    return 0;
}
