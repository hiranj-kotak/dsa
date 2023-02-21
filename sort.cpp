#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void bubble_sort(int *a, int *b, int n)
{
    int comp = 0;
    int swaps = 0;
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            comp++;
            if (b[j] > b[j + 1])
            {
                flag = true;
                swap(a[j], a[j + 1]);
                swap(b[j], b[j + 1]);
                swaps++;
            }
        }
        if (flag == false)
            break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << b[i] << endl;
    }
    // comp = n*(n-1)/2;
    // cout<<n*(n-1)/2;
    cout << comp << endl
         << swaps << endl
         << a[0] << "," << a[1];
}
void selection_sort(int *a, int *b, int n)
{
    int comp = 0;
    int swaps = 0;
    for (int i = 0; i < n; i++)
    {
        int mn = i;
        for (int j = i + 1; j < n; j++)
        {
            if (b[j] < b[mn])
                mn = j;
            comp++;
        }
        if (mn != i)
        {
            swaps++;
            swap(a[i], a[mn]);
            swap(b[i], b[mn]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << b[i] << endl;
    }
    cout << comp << endl
         << swaps << endl
         << a[0] << "," << a[1];
}
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
    int which;
    cin >> which;
    // cout<<which<<endl;
    if (which == 1)
        bubble_sort(a, b, n);
    else
        selection_sort(a, b, n);

    return 0;
}
