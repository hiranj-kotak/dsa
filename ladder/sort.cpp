#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int arr[] = {2, 3, 1, 5, 6};
    priority_queue<int> q;
    for (int i = 0; i < 5; i++)
    {
        q.push(arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = q.top();
        q.pop();
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    return 0;
}