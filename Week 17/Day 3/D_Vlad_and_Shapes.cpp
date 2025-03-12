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
        vector<string> g(n);
        for (int i = 0; i < n; i++)
        {
            cin >> g[i];
        }
        int a = -1, b = -1, c = -1, d = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (g[i][j] == '1')
                {
                    if (a == -1)
                        a = i;
                    c = i;
                    if (b == -1 || j < b)
                        b = j;
                    if (j > d)
                        d = j;
                }
            }
        }
        int s = c - a + 1;
        bool x = false;
        if (s == d - b + 1)
        {
            x = true;
            for (int i = a; i <= c; i++)
            {
                for (int j = b; j <= d; j++)
                {
                    if (g[i][j] != '1')
                    {
                        x = false;
                        break;
                    }
                }
                if (!x)
                    break;
            }
        }
        if (x)
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}