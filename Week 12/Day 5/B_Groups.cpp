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
        cin >> n;
        ll a[1000][5];

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < 5; j++)
            {
                cin >> a[i][j];
            }
        }

        bool p = false;

        for (ll x = 0; x < 5; x++)
        {
            for (ll y = x + 1; y < 5; y++)
            {
                ll g1 = 0, g2 = 0, b = 0;

                for (ll i = 0; i < n; i++)
                {
                    if (a[i][x] && a[i][y])
                    {
                        b++;
                    }
                    else if (a[i][x])
                    {
                        g1++;
                    }
                    else if (a[i][y])
                    {
                        g2++;
                    }
                }

                if (g1 <= n / 2 && g2 <= n / 2 && g1 + g2 + b == n)
                {
                    p = true;
                    break;
                }
            }
            if (p)
                break;
        }

        if (p)
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