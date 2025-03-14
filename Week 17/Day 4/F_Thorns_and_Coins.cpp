#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> d(n, -1);
        d[0] = (s[0] == '@') ? 1 : 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '*')
                continue;
            int c = (s[i] == '@') ? 1 : 0;
            if (i - 1 >= 0 && d[i - 1] != -1)
            {
                d[i] = max(d[i], d[i - 1] + c);
            }
            if (i - 2 >= 0 && d[i - 2] != -1)
            {
                d[i] = max(d[i], d[i - 2] + c);
            }
        }
        int r = 0;
        for (int i = 0; i < n; i++)
        {
            if (d[i] != -1)
            {
                r = max(r, d[i]);
            }
        }
        cout << r << endl;
    }

    return 0;
}