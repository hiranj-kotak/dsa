#include <vector>
#include <iostream>
using namespace std;
int bubbleSort(vector<int> &arr, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                cnt++;
            }
        }
    }
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
    int c = bubbleSort(v, n);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl
         << c << endl;
    return 0;
}