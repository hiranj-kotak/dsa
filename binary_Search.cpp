// ITERATIVE APPROACH

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ int n;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    int k;
    cin >> k;
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int cnt = 0;
    int flag = 0;
    while (s <= e)
    {
        cnt++;
        if (a[mid] == k)
        {
            cout << b[mid] << endl
                 << cnt;
            flag = 1;
            break;
        }
        else if (a[mid] > k)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    if (flag == 0)
        cout << "Not submitted" << endl;

    return 0;
}
