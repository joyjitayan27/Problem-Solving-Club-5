#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;

        ll x = sqrt(n);
        if (x * x != n)
        {
            cout << "No" << endl;
            continue;
        }

        vector<vector<char>> m(x, vector<char>(x));
        for (ll i = 0; i < x; ++i)
        {
            for (ll j = 0; j < x; ++j)
            {
                m[i][j] = s[i * x + j];
            }
        }

        bool f = true;
        for (ll i = 0; i < x; ++i)
        {
            for (ll j = 0; j < x; ++j)
            {
                if ((i == 0 || i == x - 1 || j == 0 || j == x - 1) && m[i][j] != '1')
                {
                    f = false;
                    break;
                }
                if (i > 0 && i < x - 1 && j > 0 && j < x - 1 && m[i][j] != '0')
                {
                    f = false;
                    break;
                }
            }
            if (!f)
                break;
        }

        if (f)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}