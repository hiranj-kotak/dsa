#include <vector>
#include <iostream>
using namespace std;

int selectionsort(vector<int> &arr, int n)
{
    int cnt = 0;
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        int mn = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[mn])
            {
                mn = j;
            }
            cnt1++;
        }
        if (mn != i)
        {
            cnt++;
            cout << arr[mn] << " " << arr[i];
            swap(arr[mn], arr[i]);
        }
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    cout << cnt1 << endl;
    return cnt;
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    int c = selectionsort(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << c << endl;
    return 0;
}