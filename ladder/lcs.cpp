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
        string s;
        cin >> s;
        string p, q;
        p = s.substr(0, n / 2);
        q = s.substr((n / 2), n);
        int a[26];
        int b[26];
        for (int i = 0; i < 26; i++)
        {
            a[i] = 0;
            b[i] = 0;
        }
        for (int i = 0; i < p.length(); i++)
        {
            char x = p[i];
            int y = x - 'a';
            a[y]++;
        }
        for (int i = 0; i < q.length(); i++)
        {
            char x = q[i];
            int y = x - 'a';
            b[y]++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            cnt += min(a[i], b[i]);
        }
        cout << cnt << endl;
    }
    return 0;
}
