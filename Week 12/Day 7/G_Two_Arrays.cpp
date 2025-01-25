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

        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }

        if (a.size() != b.size())
        {
            cout << "NO" << endl;
            continue;
        }

        vector<int> d(a.size());
        for (int i = 0; i < a.size(); ++i)
        {
            d[i] = b[i] - a[i];
        }

        bool v = true;
        for (int i = 0; i < d.size(); ++i)
        {
            if (d[i] != 0 && d[i] != 1)
            {
                v = false;
                break;
            }
        }

        if (v)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}