// ITERATIVE APPROACH

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cnt = 1;
            cout << i << endl
                 << i + 1;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << "Element " << x << " is not present in the array" << endl
             << n;
    }

    return 0;
}
