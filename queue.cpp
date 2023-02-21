#include <iostream>
using namespace std;

class queue
{
public:
    int *arr;
    int fr, rr;
    queue()
    {
        arr = new int[10];
        fr = 0;
        rr = 0;
    }
    bool isempty()
    {
        if (fr == rr)
            return true;
        return false;
    }
    void enqueue(int x)
    {
        arr[rr] = x;
        rr++;
    }
    int dequeue()
    {
        int a = arr[rr];
        rr--;
        return a;
    }
    int front()
    {
        return arr[rr];
    }
};
int main()
{

    return 0;
}