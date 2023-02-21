#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        string s;
        string p;
        cin >> s;
        // cout<<s<<endl;
        for (int i = 0; i < n; i++)
        {
            p = p + s[i];
            if (!(i & 1))
            {
                reverse(p.begin(), p.end());
            }
        }
        cout << p << endl;
    }
    return 0;
}