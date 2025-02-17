#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
bool check(int n, int c, int d, vector<int> &b)
{
    sort(b.begin(), b.end());

    vector<vector<int>> m(n, vector<int>(n));
    m[0][0] = b[0];

    for (int j = 1; j < n; ++j)
    {
        m[0][j] = m[0][j - 1] + d;
    }

    for (int i = 1; i < n; ++i)
    {
        m[i][0] = m[i - 1][0] + c;
        for (int j = 1; j < n; ++j)
        {
            m[i][j] = m[i][j - 1] + d;
        }
    }

    vector<int> e;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            e.push_back(m[i][j]);
        }
    }

    sort(e.begin(), e.end());

    return e == b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> b(n * n);
        for (int i = 0; i < n * n; ++i)
        {
            cin >> b[i];
        }

        if (check(n, c, d, b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
