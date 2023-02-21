#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll xr1 = 0;
    ll xr2 = 0;
    ll sum = 0;
    ll mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        xr1 = 0;
        xr2 = 0;
        for (int j = 0; j < i; j++)
        {
            xr1 = xr1 ^ arr[j];
        }
        for (int j = i; j < n; j++)
        {
            xr2 = xr2 ^ arr[j];
        }
        sum = xr1 + xr2;
        mx = max(sum, mx);
        cout << sum << endl;
    }
    cout << mx << endl;
    return 0;
}